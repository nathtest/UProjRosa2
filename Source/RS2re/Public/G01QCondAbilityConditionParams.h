#pragma once
#include "CoreMinimal.h"
#include "G01AbilityCondition.h"
#include "G01QCondAbilityConditionParams.generated.h"

USTRUCT(BlueprintType)
struct FG01QCondAbilityConditionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityClassTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AbilityCondition Condition;
    
    RS2RE_API FG01QCondAbilityConditionParams();
};

