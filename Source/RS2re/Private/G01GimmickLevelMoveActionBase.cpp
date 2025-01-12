#include "G01GimmickLevelMoveActionBase.h"

AG01GimmickLevelMoveActionBase::AG01GimmickLevelMoveActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDoorTypeDataTable = NULL;
    this->MGimmickType = EG01GimmickType::Door;
}

void AG01GimmickLevelMoveActionBase::GetOpenSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName) {
}

FG01GimmickDoorSettingTableRow AG01GimmickLevelMoveActionBase::GetDoorSetting() {
    return FG01GimmickDoorSettingTableRow{};
}

void AG01GimmickLevelMoveActionBase::GetCloseSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName) {
}


