#pragma once
#include "CoreMinimal.h"
#include "G01ShiftGameRuleTableRowStruct.h"
#include "OnG01ShiftGameRuleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnG01ShiftGameRule, const FName&, gameRule, bool, isShift, const FG01ShiftGameRuleTableRowStruct&, Info);

