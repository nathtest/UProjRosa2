#pragma once
#include "CoreMinimal.h"
#include "G01VoiceLoadInfo.h"
#include "OnVoiceLoadCompletedDelegate.h"
#include "G01VoiceLoadingParams.generated.h"

USTRUCT(BlueprintType)
struct FG01VoiceLoadingParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOnVoiceLoadCompleted CompleteCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01VoiceLoadInfo Info;
    
    RS2RE_API FG01VoiceLoadingParams();
};

