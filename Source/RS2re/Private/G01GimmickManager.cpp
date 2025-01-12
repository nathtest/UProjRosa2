#include "G01GimmickManager.h"
#include "G01RoomManagerAccessor.h"
#include "G01SequenceManagerAccessor.h"

AG01GimmickManager::AG01GimmickManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MRoomManagerAccessor = CreateDefaultSubobject<UG01RoomManagerAccessor>(TEXT("RoomManagerAccessor"));
    this->MSequenceManagerAccessor = CreateDefaultSubobject<UG01SequenceManagerAccessor>(TEXT("SequenceManagerAccessor"));
    this->TreasureBoxInfoTable = NULL;
}

void AG01GimmickManager::RegisterDoorOpenSoundHandle(FSQEXSeadHandleBP InSoundHandle) {
}


void AG01GimmickManager::GetTreasureBoxInfo(const FDropItemTableID& InDropItemID, FG01TreasureBoxInfoTableRow& OutTreasureBoxInfo) {
}


