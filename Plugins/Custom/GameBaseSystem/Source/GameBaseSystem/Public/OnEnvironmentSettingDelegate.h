#pragma once
#include "CoreMinimal.h"
#include "EnvironmentSettingInfo.h"
#include "OnEnvironmentSettingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnvironmentSetting, const FEnvironmentSettingInfo&, InEnvironmentSettingInfo);

