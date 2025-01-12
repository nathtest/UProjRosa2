#pragma once
#include "CoreMinimal.h"
#include "SequencePlayStartParam.h"
#include "OnSequencerPlayStartScriptDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSequencerPlayStartScript, const FSequencePlayStartParam&, InParam);

