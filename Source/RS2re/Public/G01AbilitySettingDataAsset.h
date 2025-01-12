#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01AbilityPhaseCondition.h"
#include "G01AbilitySettingDataAsset.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01AbilitySettingDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    int32 MaxPhaseNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FG01AbilityPhaseCondition> PhaseConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FName PhaseConditionTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    bool CanNotDuplicateEquipInParty;
    
    UG01AbilitySettingDataAsset();

    UFUNCTION(BlueprintCallable)
    void FindPhaseCondition(int32 InPhase, bool& OutIsFound, FG01AbilityPhaseCondition& OutConditions);
    
};

