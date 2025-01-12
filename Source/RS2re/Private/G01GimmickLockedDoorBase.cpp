#include "G01GimmickLockedDoorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo
#include "G01MsgRootComponent.h"
#include "G01MsgWindowComponent.h"

AG01GimmickLockedDoorBase::AG01GimmickLockedDoorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMessageRootComponent = CreateDefaultSubobject<UG01MsgRootComponent>(TEXT("MessageRootComponent"));
    this->MMsgWindowComponent = CreateDefaultSubobject<UG01MsgWindowComponent>(TEXT("MsgWindowComponent"));
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
    //this->MMessageRootComponent->SetupAttachment(AttachPositionsRoot);
    this->MMsgWindowComponent->SetupAttachment(MMessageRootComponent);
}

bool AG01GimmickLockedDoorBase::SetOpenedWithoutFlag(bool Opened) {
    return false;
}

bool AG01GimmickLockedDoorBase::SetOpened(bool Opened) {
    return false;
}

void AG01GimmickLockedDoorBase::OnDoorClose_Implementation() {
}

bool AG01GimmickLockedDoorBase::IsOpened() {
    return false;
}

bool AG01GimmickLockedDoorBase::IsDoorLocked_Implementation() {
    return false;
}

void AG01GimmickLockedDoorBase::CheckClose() {
}


