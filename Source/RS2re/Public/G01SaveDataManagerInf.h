#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ESaveDataSyncType.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ESaveDataSyncType -FallbackName=ESaveDataSyncType
#include "SaveDataRequestInfo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataRequestInfo -FallbackName=SaveDataRequestInfo
#include "G01SaveDataLoadOptions.h"
#include "G01SaveDataSaveOptions.h"
#include "G01SaveDataManagerInf.generated.h"

UINTERFACE(Blueprintable)
class UG01SaveDataManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01SaveDataManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SaveDataManager_TryExecuteAutoSave(bool& OutIsExecute, bool& OutIsSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SaveDataManager_Save(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, const FG01SaveDataSaveOptions& InOptions, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SaveDataManager_ReserveAutoSave(bool InIsForce);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SaveDataManager_Load(bool& OutIsSuccess, const FSaveDataRequestInfo& InRequest, const FG01SaveDataLoadOptions& InOptions, ESaveDataSyncType InSyncType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01SaveDataManager_IsTransitionFromSaveRestoreLevel();
    
};

