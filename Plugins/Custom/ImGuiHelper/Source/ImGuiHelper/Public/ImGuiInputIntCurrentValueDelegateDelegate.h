#pragma once
#include "CoreMinimal.h"
#include "ImGuiInputIntCurrentValueDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FImGuiInputIntCurrentValueDelegate, int32&, OutCurrentValue);

