#pragma once
#include "CoreMinimal.h"
#include "G01LipsyncPlayArgs.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01LipsyncPlayArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutSeconds;
    
    FG01LipsyncPlayArgs();
};

