#include "G01VoiceManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObserverSubjectComponent -FallbackName=ObserverSubjectComponent
#include "G01GameSystemDataManagerAccessor.h"

AG01VoiceManager::AG01VoiceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_VOICE;
    this->ObserverSubject = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubject"));
    this->GameSystemDataManagerAccessor = CreateDefaultSubobject<UG01GameSystemDataManagerAccessor>(TEXT("GameSystemDataManagerAccessor"));
    this->Settings = NULL;
}

void AG01VoiceManager::OnResourceLoadComplete() {
}


