#pragma once
#include "CoreMinimal.h"
#include "AppGameModeBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AppGameModeBase -FallbackName=AppGameModeBase
#include "G01MainGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class RS2RE_API AG01MainGameModeBase : public AAppGameModeBase {
    GENERATED_BODY()
public:
    AG01MainGameModeBase(const FObjectInitializer& ObjectInitializer);

};

