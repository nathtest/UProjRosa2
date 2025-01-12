#pragma once
#include "CoreMinimal.h"
#include "G01MainMenuUiControllerObserverInf.h"
#include "G01UiController.h"
#include "G01MainMenuUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01MainMenuUiController : public AG01UiController, public IG01MainMenuUiControllerObserverInf {
    GENERATED_BODY()
public:
    AG01MainMenuUiController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

