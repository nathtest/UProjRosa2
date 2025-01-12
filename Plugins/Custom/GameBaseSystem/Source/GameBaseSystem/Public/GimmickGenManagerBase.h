#pragma once
#include "CoreMinimal.h"
#include "GeneratorManagerBase.h"
#include "GimmickGenManagerBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGimmickGenManagerBase : public AGeneratorManagerBase {
    GENERATED_BODY()
public:
    AGimmickGenManagerBase(const FObjectInitializer& ObjectInitializer);

};

