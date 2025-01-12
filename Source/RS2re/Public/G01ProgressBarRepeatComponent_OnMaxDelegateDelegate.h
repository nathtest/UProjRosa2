#pragma once
#include "CoreMinimal.h"
#include "G01ProgressBarRepeatComponent_OnMaxDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FG01ProgressBarRepeatComponent_OnMaxDelegate, int32, InGaugeIndex);

