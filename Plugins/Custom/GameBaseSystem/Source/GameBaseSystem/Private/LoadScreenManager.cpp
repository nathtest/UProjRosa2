#include "LoadScreenManager.h"
#include "EManagerID.h"
#include "ObserverSubjectComponent.h"
#include "ScreenTransitionManagerAccessor.h"

ALoadScreenManager::ALoadScreenManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_LOADSCREEN;
    this->MControlWidgetType = EWidgetType::SYSTEM_LOAD_SCREEN;
    this->MCreateInputClass = NULL;
    this->DefaultScreenTransitionOutType = EScreenTransitionType::NONE;
    this->bRefreshScreenTransitionOutTypeMap = false;
    this->MIsActive = false;
    this->MWidget = NULL;
    this->MInput = NULL;
    this->MIsReserveEnd = false;
    this->MIsLoading = true;
    this->MIsAutoEnd = false;
    this->MObserverSubjectComponent = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubjectComponent"));
    this->MScreenTransitionManagerAccessor = CreateDefaultSubobject<UScreenTransitionManagerAccessor>(TEXT("ScreenTransitionManagerAccessor"));
    this->bCustomTaskCheck = false;
    this->MIsLoadingSequence = false;
}

void ALoadScreenManager::SetLoadScreenType(ELoadScreenType InType) {
}

void ALoadScreenManager::RemoveMasterViewWidget() {
}





bool ALoadScreenManager::IsActive() const {
    return false;
}

ELoadScreenType ALoadScreenManager::GetLoadScreenType() {
    return ELoadScreenType::STANDARD;
}

void ALoadScreenManager::Deactivate() {
}


void ALoadScreenManager::AddMasterViewWidget() {
}

void ALoadScreenManager::Activate() {
}


