#pragma once
#include "CoreMinimal.h"
#include "OnLookCurveStateChangeDelegate.generated.h"

class AActor;
class UCurveVector;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLookCurveStateChange, AActor*, InVisualActor, UCurveVector*, InCurve);

