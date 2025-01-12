#pragma once
#include "CoreMinimal.h"
#include "OnCompleteAsyncLoadVFXAssetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCompleteAsyncLoadVFXAsset, int32, InRequestIndex);

