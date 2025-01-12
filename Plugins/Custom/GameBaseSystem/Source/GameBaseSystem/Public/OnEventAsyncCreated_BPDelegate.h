#pragma once
#include "CoreMinimal.h"
#include "OnEventAsyncCreated_BPDelegate.generated.h"

class AEventObjectBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnEventAsyncCreated_BP, bool, IsCreateSuccess, AEventObjectBase*, InNewEvent);

