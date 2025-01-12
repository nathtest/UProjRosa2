#pragma once
#include "CoreMinimal.h"
#include "G01GeneralLipPresetID.h"
#include "G01GeneralLipsyncPresetPlayArgs.h"
#include "G01SeqMsgCommonParam.h"
#include "G01SeqGeneralLipsyncPlayParam.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqGeneralLipsyncPlayParam : public FG01SeqMsgCommonParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01GeneralLipPresetID PresetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01GeneralLipsyncPresetPlayArgs PlayArgs;
    
    RS2RE_API FG01SeqGeneralLipsyncPlayParam();
};

