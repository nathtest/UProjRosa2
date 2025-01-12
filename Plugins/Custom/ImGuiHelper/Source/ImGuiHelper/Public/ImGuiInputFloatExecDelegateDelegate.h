#pragma once
#include "CoreMinimal.h"
#include "ImGuiInputFloatExecDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FImGuiInputFloatExecDelegate, float, InChangedValue);

