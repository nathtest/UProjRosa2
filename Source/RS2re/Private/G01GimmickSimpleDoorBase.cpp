#include "G01GimmickSimpleDoorBase.h"

AG01GimmickSimpleDoorBase::AG01GimmickSimpleDoorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MGimmickType = EG01GimmickType::Door;
}

void AG01GimmickSimpleDoorBase::SetOpened(bool InOpened) {
}

void AG01GimmickSimpleDoorBase::OnDoorClose_Implementation() {
}

bool AG01GimmickSimpleDoorBase::IsOpened() {
    return false;
}

void AG01GimmickSimpleDoorBase::CheckClose() {
}


