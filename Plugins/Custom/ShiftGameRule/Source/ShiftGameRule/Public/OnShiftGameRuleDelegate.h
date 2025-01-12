#pragma once
#include "CoreMinimal.h"
#include "GameRuleBaseStruct.h"
#include "OnShiftGameRuleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnShiftGameRule, const FName&, gameRule, bool, isShift, const FGameRuleBaseStruct&, Info);

