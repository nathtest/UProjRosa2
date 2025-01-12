#pragma once
#include "CoreMinimal.h"
#include "ImGuiCheckBoxExecDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FImGuiCheckBoxExecDelegate, bool, InChangedValue);

