#pragma once
#include "CoreMinimal.h"
#include "StreamingController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=StreamingController -FallbackName=StreamingController
#include "G01StreamingControllerBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01StreamingControllerBase : public AStreamingController {
    GENERATED_BODY()
public:
    AG01StreamingControllerBase(const FObjectInitializer& ObjectInitializer);

};

