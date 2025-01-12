#include "UiControllerAccessor.h"

UUiControllerAccessor::UUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::NONE;
    this->MUiController = NULL;
}

bool UUiControllerAccessor::IsActiveUiController() const {
    return false;
}

EUiControllerId UUiControllerAccessor::GetUiControllerId() const {
    return EUiControllerId::NONE;
}

AUiController* UUiControllerAccessor::GetMainUiController() {
    return NULL;
}

void UUiControllerAccessor::DeactivateUiController() {
}

void UUiControllerAccessor::ActivateUiController() {
}


