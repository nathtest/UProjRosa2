#pragma once
#include "CoreMinimal.h"
#include "EEventEndResult.h"
#include "EventEndParams.generated.h"

USTRUCT(BlueprintType)
struct FEventEndParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventEndResult EndResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndValue;
    
    GAMEBASESYSTEM_API FEventEndParams();
};

