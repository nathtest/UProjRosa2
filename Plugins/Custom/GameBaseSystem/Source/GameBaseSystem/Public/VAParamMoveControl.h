#pragma once
#include "CoreMinimal.h"
#include "VAParamMoveControl.generated.h"

USTRUCT(BlueprintType)
struct FVAParamMoveControl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MRunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MRotationInterpSpeed;
    
    GAMEBASESYSTEM_API FVAParamMoveControl();
};

