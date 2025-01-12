#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01HudManagerInf.h"
#include "G01HudManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01HudManager : public AManagerBase, public IG01HudManagerInf {
    GENERATED_BODY()
public:
    AG01HudManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

