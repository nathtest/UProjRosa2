#pragma once
#include "CoreMinimal.h"
#include "G01MsgChoiceUseCrownDataParamID.h"
#include "G01SeqUseCrownWindowParams.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqUseCrownWindowParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01MsgChoiceUseCrownDataParamID ParamID;
    
    RS2RE_API FG01SeqUseCrownWindowParams();
};

