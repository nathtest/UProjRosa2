#pragma once
#include "CoreMinimal.h"
#include "LoadedAnimSequenceCallBackDelegate.generated.h"

class UAnimSequence;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLoadedAnimSequenceCallBack, UAnimSequence*, InLoadedAnimSequence);

