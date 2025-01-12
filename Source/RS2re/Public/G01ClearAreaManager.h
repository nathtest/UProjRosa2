#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01ClearAreaControllerInf.h"
#include "G01ClearAreaManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01ClearAreaManager : public AManagerBase, public IG01ClearAreaControllerInf {
    GENERATED_BODY()
public:
    AG01ClearAreaManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

