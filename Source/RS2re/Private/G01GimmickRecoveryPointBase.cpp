#include "G01GimmickRecoveryPointBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01GimmickRecoveryPointBase::AG01GimmickRecoveryPointBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MRecoveryPointType = ERecoveryPointType::Always;
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
}

void AG01GimmickRecoveryPointBase::SetFlagTrue() {
}

bool AG01GimmickRecoveryPointBase::GetFlag() {
    return false;
}


