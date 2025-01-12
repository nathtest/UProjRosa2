#include "G01AbilitySettingDataAsset.h"

UG01AbilitySettingDataAsset::UG01AbilitySettingDataAsset() {
    this->MaxPhaseNum = 3;
    this->PhaseConditions.AddDefaulted(3);
    this->CanNotDuplicateEquipInParty = false;
}

void UG01AbilitySettingDataAsset::FindPhaseCondition(int32 InPhase, bool& OutIsFound, FG01AbilityPhaseCondition& OutConditions) {
}


