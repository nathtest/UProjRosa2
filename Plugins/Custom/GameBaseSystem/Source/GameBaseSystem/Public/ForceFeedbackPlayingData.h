#pragma once
#include "CoreMinimal.h"
#include "EForceFeedbackPlayType.h"
#include "ForceFeedbackPlayingData.generated.h"

class UForceFeedbackEffect;

USTRUCT(BlueprintType)
struct FForceFeedbackPlayingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EForceFeedbackPlayType PlayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    GAMEBASESYSTEM_API FForceFeedbackPlayingData();
};

