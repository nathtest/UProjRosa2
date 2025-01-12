#pragma once
#include "CoreMinimal.h"
#include "ImGuiComboExecDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FImGuiComboExecDelegate, int32, InChangedIndex, const TArray<FText>&, InComboList);

