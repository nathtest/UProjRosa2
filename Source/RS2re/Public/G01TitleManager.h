#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01TitleManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01TitleManager : public AManagerBase {
    GENERATED_BODY()
public:
    AG01TitleManager(const FObjectInitializer& ObjectInitializer);

};

