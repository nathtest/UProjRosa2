#pragma once
#include "CoreMinimal.h"
#include "G01AIControllerBase.h"
#include "G01NpcAIControllerBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01NpcAIControllerBase : public AG01AIControllerBase {
    GENERATED_BODY()
public:
    AG01NpcAIControllerBase(const FObjectInitializer& ObjectInitializer);

};

