#pragma once
#include "CoreMinimal.h"
#include "ItemVACreatedDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemVACreatedDispatcher, FName, InItemID);

