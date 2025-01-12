#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01PartyFormationUiControllerInf.h"
#include "G01PartyFormationManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01PartyFormationManager : public AManagerBase, public IG01PartyFormationUiControllerInf {
    GENERATED_BODY()
public:
    AG01PartyFormationManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

