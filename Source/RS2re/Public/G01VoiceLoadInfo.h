#pragma once
#include "CoreMinimal.h"
#include "G01VoiceLoadParam.h"
#include "G01VoiceLoadInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01VoiceLoadInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FG01VoiceLoadParam> Params;
    
    RS2RE_API FG01VoiceLoadInfo();
};

