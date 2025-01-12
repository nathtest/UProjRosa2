#pragma once
#include "CoreMinimal.h"
#include "EditableLevelObjectID.h"
#include "ManagerBase.h"
#include "AIControllerComponentManager.generated.h"

class AAIController;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API AAIControllerComponentManager : public AManagerBase {
    GENERATED_BODY()
public:
    AAIControllerComponentManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AAIController* GetAIControllerToCharacter(const FEditableLevelObjectID& InNpcGenLevelObjectID);
    
};

