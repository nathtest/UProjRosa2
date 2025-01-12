#pragma once
#include "CoreMinimal.h"
#include "ImGuiSliderFloatCurrentValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FImGuiSliderFloatCurrentValueDelegate, float&, OutCurrentValue);

