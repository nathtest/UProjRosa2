#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "G01GeneralLipAnimTableRow.h"
#include "G01GeneralLipPresetID.h"
#include "G01LipSyncGeneralLoadRequestParam.h"
#include "G01LipSyncLoadRequestParam.h"
#include "G01LipSyncResource.h"
#include "G01OnLipSyncLoadCompletedDelegate.h"
#include "G01LipSyncManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01LipSyncManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01LipSyncManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ReleaseLipGeneral(const TArray<FG01GeneralLipPresetID>& InPresetIDs);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseLip(const TArray<FName>& InVoiceID);
    
    UFUNCTION(BlueprintCallable)
    bool LoadLipGeneral(const FG01LipSyncGeneralLoadRequestParam& InParam, const FG01OnLipSyncLoadCompleted& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool LoadLip(const FG01LipSyncLoadRequestParam& InParam, const FG01OnLipSyncLoadCompleted& InDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool FindLipResourceGeneral(FG01LipSyncResource& OutResource, FG01GeneralLipPresetID InPresetID);
    
    UFUNCTION(BlueprintCallable)
    bool FindLipResource(FG01LipSyncResource& OutResource, FName InVoiceID);
    
    UFUNCTION(BlueprintCallable)
    bool FindDataGeneral(FG01GeneralLipAnimTableRow& OutData, FG01GeneralLipPresetID InPresetID);
    
};

