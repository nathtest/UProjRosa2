#pragma once
#include "CoreMinimal.h"
#include "OnSequenceFinishedDelegate.generated.h"

class ASequenceController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSequenceFinished, ASequenceController*, InSeqController);

