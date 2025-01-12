#pragma once
#include "CoreMinimal.h"
#include "G01ProgressBarRepeatComponent_OnUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FG01ProgressBarRepeatComponent_OnUpdateDelegate, const float&, InPercentage, const float&, InAnimPercentage, int32, InGaugeIndex);

