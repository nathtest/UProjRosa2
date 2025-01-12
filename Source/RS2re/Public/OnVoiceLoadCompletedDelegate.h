#pragma once
#include "CoreMinimal.h"
#include "G01VoiceLoadInfo.h"
#include "OnVoiceLoadCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnVoiceLoadCompleted, const FG01VoiceLoadInfo&, InLoadInfo);

