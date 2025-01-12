#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "MovePathTargetBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AMovePathTargetBase : public AAppActor {
    GENERATED_BODY()
public:
    AMovePathTargetBase(const FObjectInitializer& ObjectInitializer);

};

