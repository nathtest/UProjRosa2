#pragma once
#include "CoreMinimal.h"
#include "G01AbilityRevise.h"
#include "G01AbilityOverHealEffect.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityOverHealEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityRevise All;
    
    FG01AbilityOverHealEffect();
};

