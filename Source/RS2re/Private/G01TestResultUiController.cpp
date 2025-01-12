#include "G01TestResultUiController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

AG01TestResultUiController::AG01TestResultUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::EXAM_RESULT;
}

bool AG01TestResultUiController::RequestExamPass(FG01TestResultDataParam DataParam) {
    return false;
}

bool AG01TestResultUiController::RequestExamFailed(FG01TestResultDataParam DataParam) {
    return false;
}




