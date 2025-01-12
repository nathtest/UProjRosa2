#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerBase -FallbackName=ManagerBase
#include "G01UiTextManagerInf.h"
#include "G01UitextManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01UitextManager : public AManagerBase, public IG01UiTextManagerInf {
    GENERATED_BODY()
public:
    AG01UitextManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

