#pragma once
#include "CoreMinimal.h"
#include "OnPathOverTurningPointDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPathOverTurningPointDelegate, const float&, InPrev, const float&, InNext);

