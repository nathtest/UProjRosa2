#pragma once
#include "CoreMinimal.h"
#include "GeneratePointParam.h"
#include "GeneratePointParams.generated.h"

USTRUCT(BlueprintType)
struct FGeneratePointParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeneratePointParam> MGeneratePointParams;
    
    GAMEBASESYSTEM_API FGeneratePointParams();
};

