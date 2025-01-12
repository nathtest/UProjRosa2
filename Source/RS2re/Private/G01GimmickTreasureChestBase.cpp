#include "G01GimmickTreasureChestBase.h"
#include "FlagSystemManagerAccessCompo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo
#include "G01MsgRootComponent.h"

AG01GimmickTreasureChestBase::AG01GimmickTreasureChestBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMessageRootComponent = CreateDefaultSubobject<UG01MsgRootComponent>(TEXT("MessageRootComponent"));
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
    //this->MMessageRootComponent->SetupAttachment(AttachPositionsRoot);
}

void AG01GimmickTreasureChestBase::SetFlagTrue() {
}

void AG01GimmickTreasureChestBase::SetEnableCollision_Implementation(bool InIsEnable) {
}

void AG01GimmickTreasureChestBase::SetDiscoveredFlagTrue() {
}

void AG01GimmickTreasureChestBase::LotteryDropItem(bool& OutSuccess, bool& OutInvalidDropItemID, FDropItem& OutDropItem) {
}

bool AG01GimmickTreasureChestBase::IsDiscovered() {
    return false;
}

bool AG01GimmickTreasureChestBase::GetFlag() {
    return false;
}


