#pragma once
#include "CoreMinimal.h"
#include "ImGuiComboCurrentIndexDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FImGuiComboCurrentIndexDelegate, int32&, OutCurrentIndex);

