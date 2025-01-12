#pragma once
#include "CoreMinimal.h"
#include "EScreenTransitionType.h"
#include "SeqFadeParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqFadeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenTransitionType TransitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    FSeqFadeParam();
};

