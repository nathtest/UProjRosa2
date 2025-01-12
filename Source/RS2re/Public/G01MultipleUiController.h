#pragma once
#include "CoreMinimal.h"
#include "MultipleUiController.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=MultipleUiController -FallbackName=MultipleUiController
#include "G01MultipleUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01MultipleUiController : public AMultipleUiController {
    GENERATED_BODY()
public:
    AG01MultipleUiController(const FObjectInitializer& ObjectInitializer);

};

