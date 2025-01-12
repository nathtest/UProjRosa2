#pragma once
#include "CoreMinimal.h"
#include "GeneratorManagerBase.h"
#include "SimpleActorGeneratorManagerBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASimpleActorGeneratorManagerBase : public AGeneratorManagerBase {
    GENERATED_BODY()
public:
    ASimpleActorGeneratorManagerBase(const FObjectInitializer& ObjectInitializer);

};

