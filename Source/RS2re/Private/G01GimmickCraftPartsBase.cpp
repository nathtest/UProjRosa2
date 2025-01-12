#include "G01GimmickCraftPartsBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01GimmickCraftPartsBase::AG01GimmickCraftPartsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
}

void AG01GimmickCraftPartsBase::SetFlagTrue() {
}

void AG01GimmickCraftPartsBase::LotteryDropItem(bool& OutSuccess, bool& OutInvalidDropItemID, FDropItem& OutDropItem) {
}

bool AG01GimmickCraftPartsBase::GetFlag() {
    return false;
}


