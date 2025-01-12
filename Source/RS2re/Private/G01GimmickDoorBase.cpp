#include "G01GimmickDoorBase.h"

AG01GimmickDoorBase::AG01GimmickDoorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDoorTypeDataTable = NULL;
    this->MAutoClose = true;
}

void AG01GimmickDoorBase::SetDoorMesh(UObject* InDoorMesh) {
}

void AG01GimmickDoorBase::PlayDoorAnimation(bool InIsOpen, bool InIsForward) {
}

void AG01GimmickDoorBase::GetUnlockedSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName) {
}

void AG01GimmickDoorBase::GetLockedSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName) {
}

FG01GimmickDoorSettingTableRow AG01GimmickDoorBase::GetDoorSetting() {
    return FG01GimmickDoorSettingTableRow{};
}

UObject* AG01GimmickDoorBase::GetDoorMesh() {
    return NULL;
}

UAnimationAsset* AG01GimmickDoorBase::GetDoorAnimationAsset(bool InIsOpen, bool InIsForward) {
    return NULL;
}


