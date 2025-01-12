#include "G01FlagSwitcherBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01FlagSwitcherBase::AG01FlagSwitcherBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
    this->MSwitchType = EG01FlagSwitcherType::Once;
}

void AG01FlagSwitcherBase::SwitchFlag() {
}

bool AG01FlagSwitcherBase::IsEnableSwitch() {
    return false;
}


