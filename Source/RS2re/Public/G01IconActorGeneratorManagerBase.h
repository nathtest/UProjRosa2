#pragma once
#include "CoreMinimal.h"
#include "GeneratorManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GeneratorManagerBase -FallbackName=GeneratorManagerBase
#include "G01IconActorGeneratorManagerBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01IconActorGeneratorManagerBase : public AGeneratorManagerBase {
    GENERATED_BODY()
public:
    AG01IconActorGeneratorManagerBase(const FObjectInitializer& ObjectInitializer);

};

