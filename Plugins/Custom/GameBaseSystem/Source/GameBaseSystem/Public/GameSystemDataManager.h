#pragma once
#include "CoreMinimal.h"
#include "GameSystemDataManagerInf.h"
#include "ManagerBase.h"
#include "GameSystemDataManager.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGameSystemDataManager : public AManagerBase, public IGameSystemDataManagerInf {
    GENERATED_BODY()
public:
    AGameSystemDataManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

