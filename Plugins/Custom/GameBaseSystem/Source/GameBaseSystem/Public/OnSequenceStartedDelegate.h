#pragma once
#include "CoreMinimal.h"
#include "OnSequenceStartedDelegate.generated.h"

class ASequenceController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceStarted, ASequenceController*, InSeqController);

