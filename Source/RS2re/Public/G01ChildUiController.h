#pragma once
#include "CoreMinimal.h"
#include "ChildUiController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ChildUiController -FallbackName=ChildUiController
#include "G01ChildUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01ChildUiController : public AChildUiController {
    GENERATED_BODY()
public:
    AG01ChildUiController(const FObjectInitializer& ObjectInitializer);

};

