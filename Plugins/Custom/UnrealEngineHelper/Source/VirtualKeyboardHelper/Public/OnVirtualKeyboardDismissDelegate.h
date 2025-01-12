#pragma once
#include "CoreMinimal.h"
#include "VirtualKeyboardDismissResult.h"
#include "OnVirtualKeyboardDismissDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnVirtualKeyboardDismiss, const FVirtualKeyboardDismissResult&, Result);

