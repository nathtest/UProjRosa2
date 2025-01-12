#pragma once
#include "CoreMinimal.h"
#include "OnLoadCompleteDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadCompleteDelegate, const TArray<UObject*>&, InLoadedAssets);

