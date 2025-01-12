#pragma once
#include "CoreMinimal.h"
#include "G01OptionConstParamStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01OptionConstParamStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GammaMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GammaMax;
    
    RS2RE_API FG01OptionConstParamStruct();
};

