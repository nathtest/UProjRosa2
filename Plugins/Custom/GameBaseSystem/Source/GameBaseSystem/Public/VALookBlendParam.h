#pragma once
#include "CoreMinimal.h"
#include "EVALookType.h"
#include "VALookBlendParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FVALookBlendParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVALookType> BlendEnableTypeList;
    
    FVALookBlendParam();
};

