#pragma once
#include "CoreMinimal.h"
#include "G01BattleLinkEffectStruct.h"
#include "G01BattleLinkPersonalEffectStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleLinkPersonalEffectStruct : public FG01BattleLinkEffectStruct {
    GENERATED_BODY()
public:
    FG01BattleLinkPersonalEffectStruct();
};

