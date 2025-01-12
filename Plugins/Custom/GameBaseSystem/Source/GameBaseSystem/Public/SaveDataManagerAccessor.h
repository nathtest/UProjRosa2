#pragma once
#include "CoreMinimal.h"
#include "ESaveDataGroup.h"
#include "ESaveDataManagerState.h"
#include "ESaveDataSyncType.h"
#include "ManagerAccessor.h"
#include "SaveDataRequestInfo.h"
#include "SaveDataSaveOptions.h"
#include "SaveDataTypeInfo.h"
#include "SaveDataManagerAccessor.generated.h"

class UObject;
class USaveGameDataCore;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API USaveDataManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    USaveDataManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateVersion(UPARAM(Ref) USaveGameDataCore*& InOutSaveData);
    
    UFUNCTION(BlueprintCallable)
    void Update(bool& OutIsSuccess, ESaveDataGroup InGroup);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAutoSaveByObject(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAutoSaveByKey(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void UnloadSaveDataByObject(USaveGameDataCore* InSaveData);
    
    UFUNCTION(BlueprintCallable)
    void UnloadSaveDataByGroup(ESaveDataGroup InGroup);
    
    UFUNCTION(BlueprintCallable)
    void TempLoad(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable)
    void Reload(bool& OutIsSuccess, FSaveDataTypeInfo& OutInfo, ESaveDataGroup InGroup, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable)
    void LockAutoSaveByObject(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable)
    void LockAutoSaveByKey(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void IsSaving(bool& OutIsSaving);
    
    UFUNCTION(BlueprintCallable)
    void IsLoading(bool& OutIsLoading);
    
    UFUNCTION(BlueprintCallable)
    void IsIdle(bool& OutIsIdle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableAutoSave() const;
    
    UFUNCTION(BlueprintCallable)
    void GetState(ESaveDataManagerState& OutState);
    
    UFUNCTION(BlueprintCallable)
    void FindTempSaveData(bool& OutIsValid, TArray<USaveGameDataCore*>& OutSaveDataList, ESaveDataGroup InGroup);
    
    UFUNCTION(BlueprintCallable)
    void FindSaveData(bool& OutIsValid, USaveGameDataCore*& OutSaveData, ESaveDataGroup InGroup);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAutoSave(bool& OutIsSuccess, FSaveDataSaveOptions InOptions, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable)
    void Delete(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest);
    
    UFUNCTION(BlueprintCallable)
    void CheckState(bool& OutIsConsistent, ESaveDataManagerState InCheckState);
    
};

