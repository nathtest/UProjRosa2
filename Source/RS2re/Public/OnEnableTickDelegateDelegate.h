#pragma once
#include "CoreMinimal.h"
#include "OnEnableTickDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEnableTickDelegate, FName, InOwnerName, bool, InEnable);

