#include "G01GimmickMimicBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01GimmickMimicBase::AG01GimmickMimicBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
}

void AG01GimmickMimicBase::SetFlagTrue() {
}

void AG01GimmickMimicBase::SetDiscoveredFlagTrue() {
}

void AG01GimmickMimicBase::LotteryDropItem(bool& OutSuccess, bool& OutInvalidDropItemID, FDropItem& OutDropItem) {
}

bool AG01GimmickMimicBase::IsDiscovered() {
    return false;
}

bool AG01GimmickMimicBase::GetFlag() {
    return false;
}


