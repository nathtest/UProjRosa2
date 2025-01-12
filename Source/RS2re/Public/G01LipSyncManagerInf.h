#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GeneralLipAnimTableRow.h"
#include "G01GeneralLipPresetID.h"
#include "G01LipSyncGeneralLoadRequestParam.h"
#include "G01LipSyncLoadRequestParam.h"
#include "G01LipSyncResource.h"
#include "G01OnLipSyncLoadCompletedDelegate.h"
#include "G01LipSyncManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LipSyncManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LipSyncManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LipSyncManager_ReleaseLipGeneral(bool& OutIsSuccess, const TArray<FG01GeneralLipPresetID>& InPresetIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LipSyncManager_ReleaseLip(bool& OutIsSuccess, const TArray<FName>& InVoiceIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LipSyncManager_LoadLipGeneral(bool& OutIsSuccess, const FG01LipSyncGeneralLoadRequestParam& InParam, const FG01OnLipSyncLoadCompleted& InDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LipSyncManager_LoadLip(bool& OutIsSuccess, const FG01LipSyncLoadRequestParam& InParam, const FG01OnLipSyncLoadCompleted& InDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LipSyncManager_FindResourceGeneral(bool& OutIsFound, FG01LipSyncResource& OutResource, FG01GeneralLipPresetID InPresetID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LipSyncManager_FindResource(bool& OutIsFound, FG01LipSyncResource& OutResource, FName InVoiceID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LipSyncManager_FindDataGeneral(bool& OutIsFound, FG01GeneralLipAnimTableRow& OutData, FG01GeneralLipPresetID InPresetID);
    
};

