#pragma once
#include "CoreMinimal.h"
#include "SequenceCameraController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceCameraController -FallbackName=SequenceCameraController
#include "G01SeqCameraController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SeqCameraController : public ASequenceCameraController {
    GENERATED_BODY()
public:
    AG01SeqCameraController(const FObjectInitializer& ObjectInitializer);

};

