#pragma once
#include "CoreMinimal.h"
#include "G01BattleSystemController.h"
#include "G01BattleSetupController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01BattleSetupController : public AG01BattleSystemController {
    GENERATED_BODY()
public:
    AG01BattleSetupController(const FObjectInitializer& ObjectInitializer);

};

