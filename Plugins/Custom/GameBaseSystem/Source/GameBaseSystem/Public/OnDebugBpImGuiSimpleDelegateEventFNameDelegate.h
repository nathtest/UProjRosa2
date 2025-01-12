#pragma once
#include "CoreMinimal.h"
#include "OnDebugBpImGuiSimpleDelegateEventFNameDelegate.generated.h"

class UG01DebugBPImGui;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDebugBpImGuiSimpleDelegateEventFName, UG01DebugBPImGui*, InImGuiBP, FName, InStr);

