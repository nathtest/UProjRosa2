#include "G01GimmickGhostTreasureChestBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01GimmickGhostTreasureChestBase::AG01GimmickGhostTreasureChestBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
}

void AG01GimmickGhostTreasureChestBase::SetFlagTrue() {
}

void AG01GimmickGhostTreasureChestBase::SetDiscoveredFlagTrue() {
}

bool AG01GimmickGhostTreasureChestBase::IsDiscovered() {
    return false;
}

bool AG01GimmickGhostTreasureChestBase::GetFlag() {
    return false;
}


