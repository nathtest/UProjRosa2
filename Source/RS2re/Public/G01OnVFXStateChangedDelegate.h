#pragma once
#include "CoreMinimal.h"
#include "G01OnVFXStateChangedDelegate.generated.h"

class UG01VFXHandle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FG01OnVFXStateChanged, UG01VFXHandle*, InVFXHandle);

