#pragma once
#include "CoreMinimal.h"
#include "G01OnEffectStateChangedDelegate.generated.h"

class UG01FXHandle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FG01OnEffectStateChanged, UG01FXHandle*, InFxHandle);

