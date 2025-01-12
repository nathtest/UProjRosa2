#pragma once
#include "CoreMinimal.h"
#include "SequencePlayStartParam.h"
#include "OnSequencerPlayStartDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequencerPlayStart, const FSequencePlayStartParam&, InParam);

