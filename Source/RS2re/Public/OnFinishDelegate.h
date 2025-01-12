#pragma once
#include "CoreMinimal.h"
#include "OnFinishDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinish, UActorComponent*, Component);

