#include "UiController.h"
#include "WidgetManagerAccessor.h"

AUiController::AUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerType = EUiControllerType::SINGLE;
    this->MUiControllerId = EUiControllerId::NONE;
    this->MAutoMode = EUiControllerAutoType::NoAuto;
    this->MMainWidgetType = EWidgetType::NONE;
    this->MIsActive = false;
    this->MMainWidget = NULL;
    this->MWidgetManagerAccessor = CreateDefaultSubobject<UWidgetManagerAccessor>(TEXT("WidgetManagerAccessor"));
}


void AUiController::RemoveMasterViewWidget(UGameViewWidget* InWidget) {
}




bool AUiController::IsActive() const {
    return false;
}

EUiControllerId AUiController::GetUiControllerId() const {
    return EUiControllerId::NONE;
}

TArray<EUiNotify> AUiController::GetNotifyList() {
    return TArray<EUiNotify>();
}

UGameViewWidget* AUiController::GetMainWidget() const {
    return NULL;
}

TArray<UGameViewWidget*> AUiController::FindGameViewWidgetList(EWidgetType InWidgetType) {
    return TArray<UGameViewWidget*>();
}

UGameViewWidget* AUiController::FindGameViewWidget(EWidgetType InWidgetType) {
    return NULL;
}

void AUiController::Deactivate() {
}

void AUiController::AddMasterViewWidget(UGameViewWidget* InWidget) {
}

void AUiController::Activate() {
}


