#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "G01BattleHitForceFeedbackDataAsset.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleHitForceFeedbackDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UForceFeedbackEffect*> LinkOrderFeedbackEffectList;
    
    UG01BattleHitForceFeedbackDataAsset();

};

