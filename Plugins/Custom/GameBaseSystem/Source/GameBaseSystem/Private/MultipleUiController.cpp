#include "MultipleUiController.h"

AMultipleUiController::AMultipleUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MControllerCreateNum = 0;
    this->MCreateControllerClass = NULL;
}

AChildUiController* AMultipleUiController::CreateChildUiController() {
    return NULL;
}


