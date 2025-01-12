#pragma once
#include "CoreMinimal.h"
#include "AppActor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppActor -FallbackName=AppActor
#include "G01BattleSystemController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01BattleSystemController : public AAppActor {
    GENERATED_BODY()
public:
    AG01BattleSystemController(const FObjectInitializer& ObjectInitializer);

};

