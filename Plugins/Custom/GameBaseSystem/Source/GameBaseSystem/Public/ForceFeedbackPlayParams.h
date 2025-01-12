#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackCommonParams.h"
#include "ForceFeedbackPlayParams.generated.h"

class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FForceFeedbackPlayParams : public FForceFeedbackCommonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayWhilePaused;
    
    FForceFeedbackPlayParams();
};

