#pragma once
#include "CoreMinimal.h"
#include "SeqNotifyForceFeedbackParams.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqNotifyForceFeedbackParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName DefaultTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MasterIntensity;
    
    FSeqNotifyForceFeedbackParams();
};

