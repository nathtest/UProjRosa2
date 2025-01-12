#pragma once
#include "CoreMinimal.h"
#include "G01EnemyAIControllerBase.h"
#include "G01FlyEnemyAIControllerBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01FlyEnemyAIControllerBase : public AG01EnemyAIControllerBase {
    GENERATED_BODY()
public:
    AG01FlyEnemyAIControllerBase(const FObjectInitializer& ObjectInitializer);

};

