#pragma once
#include "CoreMinimal.h"
#include "LoadedAnimInstanceCallBackDelegate.generated.h"

class UVisualActorAnimInstanceBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadedAnimInstanceCallBack, UVisualActorAnimInstanceBase*, InLoadedAnimInstance);

