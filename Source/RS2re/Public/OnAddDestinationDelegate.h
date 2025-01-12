#pragma once
#include "CoreMinimal.h"
#include "OnAddDestinationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddDestination, const FName&, InKey);

