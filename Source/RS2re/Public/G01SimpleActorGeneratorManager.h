#pragma once
#include "CoreMinimal.h"
#include "SimpleActorGeneratorManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SimpleActorGeneratorManagerBase -FallbackName=SimpleActorGeneratorManagerBase
#include "G01SimpleActorGeneratorManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SimpleActorGeneratorManager : public ASimpleActorGeneratorManagerBase {
    GENERATED_BODY()
public:
    AG01SimpleActorGeneratorManager(const FObjectInitializer& ObjectInitializer);

};

