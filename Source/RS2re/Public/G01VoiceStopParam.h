#pragma once
#include "CoreMinimal.h"
#include "G01SEADActiveSoundShared.h"
#include "G01VoiceStopParam.generated.h"

USTRUCT(BlueprintType)
struct FG01VoiceStopParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SEADActiveSoundShared Voice;
    
    RS2RE_API FG01VoiceStopParam();
};

