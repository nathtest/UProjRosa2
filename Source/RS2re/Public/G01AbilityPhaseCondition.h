#pragma once
#include "CoreMinimal.h"
#include "G01AbilityPhaseCondition.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityPhaseCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefeatCountSevenHeroes;
    
    FG01AbilityPhaseCondition();
};

