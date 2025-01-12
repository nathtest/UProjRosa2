#pragma once
#include "CoreMinimal.h"
#include "G01TextFeedParams.generated.h"

USTRUCT(BlueprintType)
struct FG01TextFeedParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    RS2RE_API FG01TextFeedParams();
};

