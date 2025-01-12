#pragma once
#include "CoreMinimal.h"
#include "OnDebugBpImGuiSimpleDelegateEventIntDelegate.generated.h"

class UG01DebugBPImGui;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDebugBpImGuiSimpleDelegateEventInt, UG01DebugBPImGui*, InImGuiBP, int32, InNumber);

