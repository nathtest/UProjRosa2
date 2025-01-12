#pragma once
#include "CoreMinimal.h"
#include "G01AbilityRevise.h"
#include "G01AbilityAddODGaugeEffect.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityAddODGaugeEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityRevise All;
    
    FG01AbilityAddODGaugeEffect();
};

