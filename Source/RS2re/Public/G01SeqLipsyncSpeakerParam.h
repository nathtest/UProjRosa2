#pragma once
#include "CoreMinimal.h"
#include "G01SeqLipsyncSpeakerCommon.h"
#include "G01SeqLipsyncSpeakerParam.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqLipsyncSpeakerParam : public FG01SeqLipsyncSpeakerCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    RS2RE_API FG01SeqLipsyncSpeakerParam();
};

