#include "G01GimmickManagerAccessor.h"
#include "Templates/SubclassOf.h"

UG01GimmickManagerAccessor::UG01GimmickManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UG01GimmickManagerAccessor::SetLevelMoveStartedByGimmick(bool InValue) {
}

void UG01GimmickManagerAccessor::RegisterDoorOpenSoundHandle(FSQEXSeadHandleBP InSoundHandle) {
}

void UG01GimmickManagerAccessor::LockInput(bool InIsLock) {
}

void UG01GimmickManagerAccessor::GetTreasureBoxInfo(const FDropItemTableID& InDropItemID, FG01TreasureBoxInfoTableRow& OutTreasureBoxInfo) const {
}

void UG01GimmickManagerAccessor::FindGimmickByRoomID(FRoomID InRoomId, TArray<AGimmickObjectBase*>& OutGimmickList, TArray<AGimmickObjectBase*>& OutAdjoinGimmickList, TSubclassOf<AGimmickObjectBase> InFilterClass) {
}


