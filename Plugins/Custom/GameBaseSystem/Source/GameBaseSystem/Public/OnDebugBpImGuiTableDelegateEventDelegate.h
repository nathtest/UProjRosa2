#pragma once
#include "CoreMinimal.h"
#include "OnDebugBpImGuiTableDelegateEventDelegate.generated.h"

class UG01DebugBPImGui;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnDebugBpImGuiTableDelegateEvent, UG01DebugBPImGui*, InImGuiBP, int32, InRowIndex, int32, InColIndex);

