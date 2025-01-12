#include "ScreenTransitionManager.h"
#include "EManagerID.h"
#include "GameLevelManagerAccesser.h"
#include "LoadScreenManagerAccessor.h"
#include "SequencerManagerAccessCompo.h"

AScreenTransitionManager::AScreenTransitionManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_SCREENTRANSITION;
    this->MIsActive = false;
    this->MControlWidgetType = EWidgetType::SYSTEM_SCREEN_TRANSITION;
    this->MWidget = NULL;
    this->MCreateWidgetClass = NULL;
    this->MInput = NULL;
    this->MCreateInputClass = NULL;
    this->MIsHideScreen = false;
    this->IsLock = false;
    this->MLoadScreenManagerAccessor = CreateDefaultSubobject<ULoadScreenManagerAccessor>(TEXT("LoadScreenManagerAccesser"));
    this->MSequenceManagerAccessor = CreateDefaultSubobject<USequencerManagerAccessCompo>(TEXT("SequenceManagerAccessor"));
    this->MGameLevelManagerAccesser = CreateDefaultSubobject<UGameLevelManagerAccesser>(TEXT("GameLevelManagerAccesser"));
}

void AScreenTransitionManager::SetScreenTransitionType(EScreenTransitionType InType) {
}

void AScreenTransitionManager::ScreenTransitionReset(bool InIsOn) {
}

void AScreenTransitionManager::ScreenTransitionOut(float InTime, EScreenTransitionType InType) {
}

void AScreenTransitionManager::ScreenTransitionIn(EScreenTransitionType InType, float InTime) {
}

void AScreenTransitionManager::RemoveMasterViewWidget() {
}



bool AScreenTransitionManager::IsExecutableTransitionOut_Implementation() const {
    return false;
}

bool AScreenTransitionManager::IsActive() const {
    return false;
}

void AScreenTransitionManager::HideScreen() {
}

void AScreenTransitionManager::Deactivate() {
}

void AScreenTransitionManager::AddMasterViewWidget() {
}

void AScreenTransitionManager::Activate() {
}


