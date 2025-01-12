#pragma once
#include "CoreMinimal.h"
#include "CheckDLCAsyncOutputPinDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCheckDLCAsyncOutputPin, bool, Result);

