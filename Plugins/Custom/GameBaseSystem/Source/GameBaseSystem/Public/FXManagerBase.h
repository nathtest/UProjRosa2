#pragma once
#include "CoreMinimal.h"
#include "LevelObjectFindInterface.h"
#include "ManagerBase.h"
#include "FXManagerBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AFXManagerBase : public AManagerBase, public ILevelObjectFindInterface {
    GENERATED_BODY()
public:
    AFXManagerBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

