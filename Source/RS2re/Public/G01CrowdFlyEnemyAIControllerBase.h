#pragma once
#include "CoreMinimal.h"
#include "G01CrowdEnemyAIControllerBase.h"
#include "G01CrowdFlyEnemyAIControllerBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01CrowdFlyEnemyAIControllerBase : public AG01CrowdEnemyAIControllerBase {
    GENERATED_BODY()
public:
    AG01CrowdFlyEnemyAIControllerBase(const FObjectInitializer& ObjectInitializer);

};

