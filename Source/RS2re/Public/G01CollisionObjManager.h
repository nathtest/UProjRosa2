#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=CollisionObjectManager -FallbackName=CollisionObjectManager
#include "G01CollisionObjManagerInterface.h"
#include "G01CollisionObjManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01CollisionObjManager : public ACollisionObjectManager, public IG01CollisionObjManagerInterface {
    GENERATED_BODY()
public:
    AG01CollisionObjManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

