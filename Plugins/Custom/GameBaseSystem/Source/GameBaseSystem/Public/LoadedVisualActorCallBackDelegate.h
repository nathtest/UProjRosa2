#pragma once
#include "CoreMinimal.h"
#include "LoadedVisualActorCallBackDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FLoadedVisualActorCallBack, UObject*, InLoadedResource);

