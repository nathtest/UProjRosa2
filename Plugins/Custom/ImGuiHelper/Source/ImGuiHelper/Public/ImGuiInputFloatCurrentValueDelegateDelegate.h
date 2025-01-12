#pragma once
#include "CoreMinimal.h"
#include "ImGuiInputFloatCurrentValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FImGuiInputFloatCurrentValueDelegate, float&, OutCurrentValue);

