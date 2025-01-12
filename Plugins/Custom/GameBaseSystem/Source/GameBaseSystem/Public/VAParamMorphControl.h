#pragma once
#include "CoreMinimal.h"
#include "VAParamMorphParam.h"
#include "VAParamMorphControl.generated.h"

USTRUCT(BlueprintType)
struct FVAParamMorphControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVAParamMorphParam> MMorphParams;
    
    GAMEBASESYSTEM_API FVAParamMorphControl();
};

