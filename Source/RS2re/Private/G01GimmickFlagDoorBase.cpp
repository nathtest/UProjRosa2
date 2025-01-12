#include "G01GimmickFlagDoorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01GimmickFlagDoorBase::AG01GimmickFlagDoorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
}

void AG01GimmickFlagDoorBase::OnDoorOpen_Implementation() {
}

void AG01GimmickFlagDoorBase::OnDoorClose_Implementation() {
}


