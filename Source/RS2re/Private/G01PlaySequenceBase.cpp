#include "G01PlaySequenceBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomInfoComponent -FallbackName=RoomInfoComponent
#include "G01BattleManagerAccessor.h"
#include "G01RoomManagerAccessor.h"
#include "G01SequenceManagerAccessor.h"

AG01PlaySequenceBase::AG01PlaySequenceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SequenceManagerAccessor = CreateDefaultSubobject<UG01SequenceManagerAccessor>(TEXT("SequenceManagerAccessor"));
    this->RoomManagerAccessor = CreateDefaultSubobject<UG01RoomManagerAccessor>(TEXT("RoomManagerAccessor"));
    this->BattleManagerAccessor = CreateDefaultSubobject<UG01BattleManagerAccessor>(TEXT("BattleManagerAccessor"));
    this->RoomInfoComponent = CreateDefaultSubobject<URoomInfoComponent>(TEXT("RoomInfoComponent"));
    this->SequenceController = NULL;
    this->IsPlayFromGeneratePoint = false;
    this->PlayCount = 1;
    this->IsStopsInBattle = false;
    this->IsPauseInBattle = false;
    this->IsInBattle = false;
}

void AG01PlaySequenceBase::OnAvailableSequence() {
}


