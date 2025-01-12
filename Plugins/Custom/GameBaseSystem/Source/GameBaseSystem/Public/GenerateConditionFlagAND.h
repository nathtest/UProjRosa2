#pragma once
#include "CoreMinimal.h"
#include "GenerateConditionFlag.h"
#include "GenerateConditionFlagAND.generated.h"

USTRUCT(BlueprintType)
struct FGenerateConditionFlagAND {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGenerateConditionFlag> MConditionsAND;
    
    GAMEBASESYSTEM_API FGenerateConditionFlagAND();
};

