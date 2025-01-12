#pragma once
#include "CoreMinimal.h"
#include "LevelObjectFindInterface.h"
#include "ManagerBase.h"
#include "TransitionManagerBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ATransitionManagerBase : public AManagerBase, public ILevelObjectFindInterface {
    GENERATED_BODY()
public:
    ATransitionManagerBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

