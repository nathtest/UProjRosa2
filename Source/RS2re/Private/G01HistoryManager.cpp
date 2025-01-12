#include "G01HistoryManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObserverSubjectComponent -FallbackName=ObserverSubjectComponent
#include "G01CharacterManagerAccessor.h"
#include "G01PartyManagerAccessor.h"
#include "G01PeriodManagerAccessor.h"

AG01HistoryManager::AG01HistoryManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_HISTORY;
    this->Settings = NULL;
    this->ObserverSubject = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubject"));
    this->PeriodManagerAccessor = CreateDefaultSubobject<UG01PeriodManagerAccessor>(TEXT("PeriodManagerAccessor"));
    this->CharacterManagerAccessor = CreateDefaultSubobject<UG01CharacterManagerAccessor>(TEXT("CharacterManagerAccessor"));
    this->PartyManagerAccessor = CreateDefaultSubobject<UG01PartyManagerAccessor>(TEXT("PartyManagerAccessor"));
}


