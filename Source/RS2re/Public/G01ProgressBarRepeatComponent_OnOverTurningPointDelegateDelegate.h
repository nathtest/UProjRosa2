#pragma once
#include "CoreMinimal.h"
#include "G01ProgressBarRepeatComponent_OnOverTurningPointDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FG01ProgressBarRepeatComponent_OnOverTurningPointDelegate, const float&, InPrev, const float&, InNext, int32, InGaugeIndex);

