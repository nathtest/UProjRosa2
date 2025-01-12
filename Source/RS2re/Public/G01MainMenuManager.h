#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01MainMenuManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01MainMenuManager : public AManagerBase {
    GENERATED_BODY()
public:
    AG01MainMenuManager(const FObjectInitializer& ObjectInitializer);

};

