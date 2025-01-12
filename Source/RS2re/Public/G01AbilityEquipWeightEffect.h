#pragma once
#include "CoreMinimal.h"
#include "G01AbilityRevise.h"
#include "G01AbilityEquipWeightEffect.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityEquipWeightEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityRevise All;
    
    FG01AbilityEquipWeightEffect();
};

