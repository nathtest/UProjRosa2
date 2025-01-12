#pragma once
#include "CoreMinimal.h"
#include "OnVoiceLoadCompletedDelegate.h"
#include "G01VoiceLoadRequestParam.generated.h"

USTRUCT(BlueprintType)
struct FG01VoiceLoadRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TextIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAsyncLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVoiceLoadCompleted Callback;
    
    RS2RE_API FG01VoiceLoadRequestParam();
};

