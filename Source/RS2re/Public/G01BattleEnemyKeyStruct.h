#pragma once
#include "CoreMinimal.h"
#include "PulldownStruct/PulldownStructBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=PulldownStruct -ObjectName=PulldownStructBase -FallbackName=PulldownStructBase
#include "G01BattleEnemyKeyStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleEnemyKeyStruct : public FPulldownStructBase {
    GENERATED_BODY()
public:
    FG01BattleEnemyKeyStruct();
};

