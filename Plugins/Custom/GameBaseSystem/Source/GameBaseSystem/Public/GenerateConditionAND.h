#pragma once
#include "CoreMinimal.h"
#include "GenerateCondition.h"
#include "GenerateConditionAND.generated.h"

USTRUCT(BlueprintType)
struct FGenerateConditionAND {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenerateCondition> MConditionsAND;
    
    GAMEBASESYSTEM_API FGenerateConditionAND();
};

