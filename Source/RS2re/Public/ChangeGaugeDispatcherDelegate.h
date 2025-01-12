#pragma once
#include "CoreMinimal.h"
#include "ChangeGaugeDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeGaugeDispatcher, int32, InGauge, bool, InIsMax);

