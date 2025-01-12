#pragma once
#include "CoreMinimal.h"
#include "VAMoveParams.generated.h"

USTRUCT(BlueprintType)
struct FVAMoveParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsEnableFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MFootIKMultiplier;
    
    GAMEBASESYSTEM_API FVAMoveParams();
};

