#pragma once
#include "CoreMinimal.h"
#include "EG01AbilityConditionType.h"
#include "G01AbilityCondition.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EG01AbilityConditionType> ConditionTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FG01AbilityCondition();
};

