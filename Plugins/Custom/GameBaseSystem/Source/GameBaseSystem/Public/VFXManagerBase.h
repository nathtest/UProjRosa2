#pragma once
#include "CoreMinimal.h"
#include "LevelObjectFindInterface.h"
#include "ManagerBase.h"
#include "VFXManagerBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AVFXManagerBase : public AManagerBase, public ILevelObjectFindInterface {
    GENERATED_BODY()
public:
    AVFXManagerBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

