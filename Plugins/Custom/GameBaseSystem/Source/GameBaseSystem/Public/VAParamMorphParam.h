#pragma once
#include "CoreMinimal.h"
#include "VAParamMorphParam.generated.h"

USTRUCT(BlueprintType)
struct FVAParamMorphParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MMorphName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMorphValue;
    
    GAMEBASESYSTEM_API FVAParamMorphParam();
};

