#pragma once
#include "CoreMinimal.h"
#include "SeqFrameJumpNotifyParam.h"
#include "OnExecuteJumpToFrameDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnExecuteJumpToFrame, const FSeqFrameJumpNotifyParam&, InBefore, const FSeqFrameJumpNotifyParam&, InAfter);

