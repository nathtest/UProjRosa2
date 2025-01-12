#pragma once
#include "CoreMinimal.h"
#include "LevelObjectFindInterface.h"
#include "ManagerBase.h"
#include "GraphicsSettingManagerBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGraphicsSettingManagerBase : public AManagerBase, public ILevelObjectFindInterface {
    GENERATED_BODY()
public:
    AGraphicsSettingManagerBase(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

