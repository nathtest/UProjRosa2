#include "G01TutorialManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiManagerAccessor -FallbackName=UiManagerAccessor

AG01TutorialManager::AG01TutorialManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_TUTORIAL;
    this->UiManagerAccessor = CreateDefaultSubobject<UUiManagerAccessor>(TEXT("UiManagerAccesser"));
    this->TutorialUiController = NULL;
}

void AG01TutorialManager::OnGameStart() {
}


