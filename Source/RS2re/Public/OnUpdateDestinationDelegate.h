#pragma once
#include "CoreMinimal.h"
#include "G01DestinationUpdateData.h"
#include "OnUpdateDestinationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateDestination, const FG01DestinationUpdateData&, InData);

