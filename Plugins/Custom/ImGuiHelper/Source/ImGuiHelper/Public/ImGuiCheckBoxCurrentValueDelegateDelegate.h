#pragma once
#include "CoreMinimal.h"
#include "ImGuiCheckBoxCurrentValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FImGuiCheckBoxCurrentValueDelegate, bool&, OutCurrentValue);

