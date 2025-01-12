#pragma once
#include "CoreMinimal.h"
#include "G01BattleEndConditionParam.h"
#include "G01BattleEndTransientConditionParam.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEndTransientConditionParam : public FG01BattleEndConditionParam {
    GENERATED_BODY()
public:
    FG01BattleEndTransientConditionParam();
};

