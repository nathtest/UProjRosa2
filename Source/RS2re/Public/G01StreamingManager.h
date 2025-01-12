#pragma once
#include "CoreMinimal.h"
#include "StreamingControllerManager.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=StreamingControllerManager -FallbackName=StreamingControllerManager
#include "G01StreamingManagerInterface.h"
#include "G01StreamingManager.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01StreamingManager : public AStreamingControllerManager, public IG01StreamingManagerInterface {
    GENERATED_BODY()
public:
    AG01StreamingManager(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

