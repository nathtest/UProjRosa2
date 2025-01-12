#pragma once
#include "CoreMinimal.h"
#include "ImGuiInputIntExecDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FImGuiInputIntExecDelegate, int32, InChangedValue);

