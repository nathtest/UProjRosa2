#pragma once
#include "CoreMinimal.h"
#include "FlagChangedEventParam.h"
#include "OnReceiveFlagChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReceiveFlagChanged, const FFlagChangedEventParam&, InParam);

