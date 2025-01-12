#include "AppPlayerController.h"
#include "InputManagerAccessComponent.h"

AAppPlayerController::AAppPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->InputManagerAccessor = CreateDefaultSubobject<UInputManagerAccessComponent>(TEXT("InputManagerAccessor"));
    this->bIsCheckAxisKeyState = true;
    this->bIsBackground = false;
    this->bIsSystemUiOverlaid = false;
    this->bIsReadyMousePosition = false;
}


