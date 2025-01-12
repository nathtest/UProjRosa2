#pragma once
#include "CoreMinimal.h"
#include "TextSystemManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=TextSystemManager -FallbackName=TextSystemManager
#include "G01TextSystemManagerInterface.h"
#include "G01TextSystemManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01TextSystemManager : public ATextSystemManager, public IG01TextSystemManagerInterface {
    GENERATED_BODY()
public:
    AG01TextSystemManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

