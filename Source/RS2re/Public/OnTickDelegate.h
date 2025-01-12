#pragma once
#include "CoreMinimal.h"
#include "OnTickDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTick, UActorComponent*, Component, float, Rate);

