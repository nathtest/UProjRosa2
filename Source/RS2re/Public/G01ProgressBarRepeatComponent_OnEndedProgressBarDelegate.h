#pragma once
#include "CoreMinimal.h"
#include "G01ProgressBarRepeatComponent_OnEndedProgressBarDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FG01ProgressBarRepeatComponent_OnEndedProgressBar, const float&, InPercentage, bool, InIsImmediate, int32, InGaugeIndex);

