#pragma once
#include "CoreMinimal.h"
#include "G01GeneralLipPresetID.h"
#include "G01GeneralLipsyncPresetPlayArgs.h"
#include "G01SeqLipsyncSpeakerCommon.h"
#include "G01SeqGeneralLipsyncSpeakerParam.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqGeneralLipsyncSpeakerParam : public FG01SeqLipsyncSpeakerCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01GeneralLipPresetID PresetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01GeneralLipsyncPresetPlayArgs PlayArgs;
    
    RS2RE_API FG01SeqGeneralLipsyncSpeakerParam();
};

