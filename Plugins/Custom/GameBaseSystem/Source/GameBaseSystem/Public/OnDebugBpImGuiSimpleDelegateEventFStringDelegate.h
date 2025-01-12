#pragma once
#include "CoreMinimal.h"
#include "OnDebugBpImGuiSimpleDelegateEventFStringDelegate.generated.h"

class UG01DebugBPImGui;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDebugBpImGuiSimpleDelegateEventFString, UG01DebugBPImGui*, InImGuiBP, const FString&, InStr);

