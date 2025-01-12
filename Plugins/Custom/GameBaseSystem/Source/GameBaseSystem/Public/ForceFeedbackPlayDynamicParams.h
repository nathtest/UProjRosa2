#pragma once
#include "CoreMinimal.h"
#include "ForceFeedbackCommonParams.h"
#include "ForceFeedbackPlayDynamicParams.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FForceFeedbackPlayDynamicParams : public FForceFeedbackCommonParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectsLeftLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectsLeftSmall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectsRightLarge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectsRightSmall;
    
    FForceFeedbackPlayDynamicParams();
};

