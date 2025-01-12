#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ESaveDataGroup.h"
#include "ESaveDataSyncType.h"
#include "SaveDataLoadOptions.h"
#include "SaveDataRequestInfo.h"
#include "SaveDataSaveOptions.h"
#include "SaveDataTypeInfo.h"
#include "SaveDataManagerInf.generated.h"

class UObject;
class USaveGameDataCore;

UINTERFACE(Blueprintable)
class USaveDataManagerInf : public UInterface {
    GENERATED_BODY()
};

class ISaveDataManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_UpdateVersion(UPARAM(Ref) USaveGameDataCore*& InOutSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_UnlockAutoSaveByObject(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_UnlockAutoSaveByKey(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_UnloadSaveDataByObject(USaveGameDataCore* InSaveData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_UnloadSaveDataByGroup(const ESaveDataGroup& InGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_Save(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, const FSaveDataSaveOptions& InOptions, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_Reload(bool& OutIsSuccess, FSaveDataTypeInfo& OutInfo, ESaveDataGroup InGroup, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_LockAutoSaveByObject(const UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_LockAutoSaveByKey(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_Load(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, const FSaveDataLoadOptions& InOptions, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_IsSaving(bool& OutIsSaving);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_IsLoading(bool& OutIsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_IsIdle(bool& OutIsIdle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_SaveDataManager_IsEnableAutoSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_FindTempSaveData(bool& OutIsValid, TArray<USaveGameDataCore*>& OutSaveData, ESaveDataGroup InGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_FindSaveData(bool& OutIsValid, USaveGameDataCore*& OutSaveData, ESaveDataGroup InGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SaveDataManager_Delete(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest);
    
};

