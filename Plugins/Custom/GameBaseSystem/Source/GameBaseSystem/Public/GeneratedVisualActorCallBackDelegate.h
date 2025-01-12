#pragma once
#include "CoreMinimal.h"
#include "GeneratedVisualActorParamStruct.h"
#include "GeneratedVisualActorCallBackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGeneratedVisualActorCallBack, const FGeneratedVisualActorParamStruct&, InGeneratedVisualActorParam);

