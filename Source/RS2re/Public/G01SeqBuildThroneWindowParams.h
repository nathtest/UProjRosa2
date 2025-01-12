#pragma once
#include "CoreMinimal.h"
#include "G01MsgChoiceUseCrownDataParamID.h"
#include "G01ThroneMenuUiControllerDataStructID.h"
#include "G01SeqBuildThroneWindowParams.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqBuildThroneWindowParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MsgChoiceUseCrownDataParamID ChoiceParamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ThroneMenuUiControllerDataStructID ThroneID;
    
    RS2RE_API FG01SeqBuildThroneWindowParams();
};

