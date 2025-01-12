#pragma once
#include "CoreMinimal.h"
#include "G01TutorialUiContInf.h"
#include "G01UiController.h"
#include "G01TutorialUiController.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01TutorialUiController : public AG01UiController, public IG01TutorialUiContInf {
    GENERATED_BODY()
public:
    AG01TutorialUiController(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

