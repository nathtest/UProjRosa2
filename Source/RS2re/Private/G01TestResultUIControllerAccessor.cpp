#include "G01TestResultUIControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01TestResultUIControllerAccessor::UG01TestResultUIControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::EXAM_RESULT;
}

bool UG01TestResultUIControllerAccessor::RequestExamPass(FG01TestResultDataParam DataParam) {
    return false;
}

bool UG01TestResultUIControllerAccessor::RequestExamFailed(FG01TestResultDataParam DataParam) {
    return false;
}


