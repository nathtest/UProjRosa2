#include "EventObjectManager.h"
#include "EManagerID.h"
#include "LoadScreenManagerAccessor.h"
#include "ObserverSubjectComponent.h"

AEventObjectManager::AEventObjectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_EVENT;
    this->MAllEventParamTable = NULL;
    this->MEventAtLevelTransitionTable = NULL;
    this->MLoadScreenAccessor = CreateDefaultSubobject<ULoadScreenManagerAccessor>(TEXT("LoadScreenAccessor"));
    this->ObserverSubjectComponent = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubjectComponent"));
    this->MIsDelayRequestQueueEvent = false;
}

void AEventObjectManager::UnlockCreateEvent(AActor* InLockActor) {
}

void AEventObjectManager::ReceiveEventEnd(const FEventResult& InEndResult) {
}




void AEventObjectManager::OnPostGameStart() {
}



void AEventObjectManager::OnCompleteTeleportInLevel(const FLevelTransitionInfo& InTransitionLevelInfo) {
}


