#pragma once
#include "CoreMinimal.h"
#include "GamePlayDataManagerInf.h"
#include "ManagerBase.h"
#include "GamePlayDataManager.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AGamePlayDataManager : public AManagerBase, public IGamePlayDataManagerInf {
    GENERATED_BODY()
public:
    AGamePlayDataManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

