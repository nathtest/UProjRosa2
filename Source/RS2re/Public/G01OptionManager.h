#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01OptionManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01OptionManager : public AManagerBase {
    GENERATED_BODY()
public:
    AG01OptionManager(const FObjectInitializer& ObjectInitializer);

};

