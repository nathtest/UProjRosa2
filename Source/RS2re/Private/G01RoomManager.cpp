#include "G01RoomManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01RoomManager::AG01RoomManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
    this->IsEnableLevelStreamingRequest = true;
    this->MLevelTransitionTable = NULL;
    this->BattleFieldParamTable = NULL;
    this->RoomScaleTable = NULL;
    this->MCustomDestDispClassMapCollision = NULL;
    this->IsBattle = false;
}

FRoomID AG01RoomManager::GetStartRoomID_Implementation() {
    return FRoomID{};
}

FG01BgmRequest AG01RoomManager::GetBgmID() {
    return FG01BgmRequest{};
}

void AG01RoomManager::ChangeRoom_Implementation(FRoomID InRoomId, bool InForceNotify) {
}


