#pragma once
#include "CoreMinimal.h"
#include "ImGuiInputTextExecDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FImGuiInputTextExecDelegate, const FString&, InChangedValue);

