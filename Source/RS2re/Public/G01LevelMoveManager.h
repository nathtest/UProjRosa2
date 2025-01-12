#pragma once
#include "CoreMinimal.h"
#include "LevelMoveSystemManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LevelMoveSystemManager -FallbackName=LevelMoveSystemManager
#include "G01LevelMoveManagerInf.h"
#include "G01LevelMoveManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01LevelMoveManager : public ALevelMoveSystemManager, public IG01LevelMoveManagerInf {
    GENERATED_BODY()
public:
    AG01LevelMoveManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

