#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityConditionType.h"
#include "G01AbilityLearnStatPerChara.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityLearnStatPerChara {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01AbilityConditionType, int32> CounterMap;
    
    FG01AbilityLearnStatPerChara();
};

