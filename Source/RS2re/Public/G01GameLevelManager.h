#pragma once
#include "CoreMinimal.h"
#include "GameLevelManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=GameLevelManager -FallbackName=GameLevelManager
#include "G01GameLevelManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01GameLevelManager : public AGameLevelManager {
    GENERATED_BODY()
public:
    AG01GameLevelManager(const FObjectInitializer& ObjectInitializer);

};

