#pragma once
#include "CoreMinimal.h"
#include "OnCompleteAsyncLoadAssetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleteAsyncLoadAsset, int32, InRequestIndex);

