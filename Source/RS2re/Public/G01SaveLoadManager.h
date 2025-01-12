#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01SaveLoadUiControllerInf.h"
#include "G01SaveLoadManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SaveLoadManager : public AManagerBase, public IG01SaveLoadUiControllerInf {
    GENERATED_BODY()
public:
    AG01SaveLoadManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

