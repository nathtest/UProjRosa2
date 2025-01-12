#pragma once
#include "CoreMinimal.h"
#include "OnUpdateProgressBarDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateProgressBarDelegate, const float&, InPercentage, const float&, InAnimPercentage);

