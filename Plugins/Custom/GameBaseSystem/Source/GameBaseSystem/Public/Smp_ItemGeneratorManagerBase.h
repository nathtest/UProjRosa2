#pragma once
#include "CoreMinimal.h"
#include "GeneratorManagerBase.h"
#include "Smp_ItemGeneratorManagerBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASmp_ItemGeneratorManagerBase : public AGeneratorManagerBase {
    GENERATED_BODY()
public:
    ASmp_ItemGeneratorManagerBase(const FObjectInitializer& ObjectInitializer);

};

