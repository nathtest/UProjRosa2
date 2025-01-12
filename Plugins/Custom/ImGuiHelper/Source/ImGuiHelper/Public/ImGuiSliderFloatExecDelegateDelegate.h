#pragma once
#include "CoreMinimal.h"
#include "ImGuiSliderFloatExecDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FImGuiSliderFloatExecDelegate, float, InChangedValue);

