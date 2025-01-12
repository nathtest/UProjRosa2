#pragma once
#include "CoreMinimal.h"
#include "SequencePlayFinishParam.h"
#include "OnSequencerPlayFinishedScriptDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSequencerPlayFinishedScript, const FSequencePlayFinishParam&, InParam);

