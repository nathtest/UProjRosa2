#pragma once
#include "CoreMinimal.h"
#include "LookCurveDelegateScriptDelegate.generated.h"

class AActor;
class UCurveVector;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FLookCurveDelegateScript, AActor*, InVisualActor, UCurveVector*, InCurve);

