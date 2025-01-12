#pragma once
#include "CoreMinimal.h"
#include "OnDebugBpImGuiSimpleDelegateEventDelegate.generated.h"

class UG01DebugBPImGui;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDebugBpImGuiSimpleDelegateEvent, UG01DebugBPImGui*, InImGuiBP);

