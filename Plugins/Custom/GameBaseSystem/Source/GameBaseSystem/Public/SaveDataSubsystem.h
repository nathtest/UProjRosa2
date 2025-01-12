#pragma once
#include "CoreMinimal.h"
#include "AppGameInstanceSubsystem.h"
#include "ESaveDataGroup.h"
#include "ESaveDataSubsystemState.h"
#include "ESaveDataSyncType.h"
#include "ESaveSlotCategory.h"
#include "SaveDataLoadOptions.h"
#include "SaveDataRequestInfo.h"
#include "SaveDataSaveOptions.h"
#include "SaveDataTypeInfo.h"
#include "SaveGameDataArray.h"
#include "SaveReserveData.h"
#include "SaveDataSubsystem.generated.h"

class UGameInstance;
class UObject;
class USaveDataSubsystemHelper;
class USaveGameDataCore;
class UWorld;

UCLASS(Abstract, Blueprintable)
class GAMEBASESYSTEM_API USaveDataSubsystem : public UAppGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> AutoSaveLockKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESaveDataGroup, USaveGameDataCore*> LoadSaveDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESaveDataGroup, FSaveGameDataArray> TempLoadSaveDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESaveDataGroup, FSaveDataRequestInfo> LastSaveRequestInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESaveSlotCategory, FSaveReserveData> Reserves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USaveDataSubsystemHelper* Helper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESaveDataSubsystemState State;
    
public:
    USaveDataSubsystem();

    UFUNCTION(BlueprintCallable)
    void UpdateVersion(USaveGameDataCore*& InOutSaveData);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateSaveData(const ESaveDataGroup& InGroup);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAutoSaveByObject(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAutoSaveByKey(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void UnloadByObject(USaveGameDataCore* InSaveData);
    
    UFUNCTION(BlueprintCallable)
    void UnloadByGroup(ESaveDataGroup InGroup, bool InIsTempLoad);
    
    UFUNCTION(BlueprintCallable)
    void Save(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, const FSaveDataSaveOptions& InOptions, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void Reload(bool& OutIsSuccess, FSaveDataTypeInfo& OutInfo, ESaveDataGroup InGroup, ESaveDataSyncType InSyncType);
    
private:
    UFUNCTION(BlueprintCallable)
    void ReceiveStartGameInstance(UGameInstance* InGameInstance);
    
    UFUNCTION(BlueprintCallable)
    void ReceivePostLoadMap(UWorld* InWorld);
    
public:
    UFUNCTION(BlueprintCallable)
    void LockAutoSaveByObject(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void LockAutoSaveByKey(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void Load(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, const FSaveDataLoadOptions& InOptions, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSaving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSavable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIdle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableAutoSave() const;
    
    UFUNCTION(BlueprintCallable)
    void FindTempSaveDataRaw(TArray<USaveGameDataCore*>& OutSaveDataList, ESaveDataGroup InGroup);
    
    UFUNCTION(BlueprintCallable)
    USaveGameDataCore* FindSaveDataRaw(ESaveDataGroup InGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesSaveFileExist(const FSaveDataRequestInfo& InRequest) const;
    
    UFUNCTION(BlueprintCallable)
    void Delete(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest);
    
    UFUNCTION(BlueprintCallable)
    void DecompressAll(int32 InUserIndex);
    
    UFUNCTION(BlueprintCallable)
    void CompressAll(int32 InUserIndex);
    
    UFUNCTION(BlueprintCallable)
    void CanReload(bool& OutIsReloadable, ESaveDataGroup InGroup);
    
};

