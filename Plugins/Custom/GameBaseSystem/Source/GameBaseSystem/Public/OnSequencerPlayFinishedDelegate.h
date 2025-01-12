#pragma once
#include "CoreMinimal.h"
#include "SequencePlayFinishParam.h"
#include "OnSequencerPlayFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequencerPlayFinished, const FSequencePlayFinishParam&, InParam);

