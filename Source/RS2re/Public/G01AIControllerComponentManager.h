#pragma once
#include "CoreMinimal.h"
#include "AIControllerComponentManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AIControllerComponentManager -FallbackName=AIControllerComponentManager
#include "G01AIControllerCompoMngInterface.h"
#include "G01AIControllerComponentManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01AIControllerComponentManager : public AAIControllerComponentManager, public IG01AIControllerCompoMngInterface {
    GENERATED_BODY()
public:
    AG01AIControllerComponentManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

