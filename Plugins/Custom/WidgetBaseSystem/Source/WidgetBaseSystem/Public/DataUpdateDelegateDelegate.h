#pragma once
#include "CoreMinimal.h"
#include "DataUpdateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDataUpdateDelegate, FName, InNotifyName);

