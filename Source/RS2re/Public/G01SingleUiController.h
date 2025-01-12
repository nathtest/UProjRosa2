#pragma once
#include "CoreMinimal.h"
#include "SingleUiController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SingleUiController -FallbackName=SingleUiController
#include "G01SingleUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SingleUiController : public ASingleUiController {
    GENERATED_BODY()
public:
    AG01SingleUiController(const FObjectInitializer& ObjectInitializer);

};

