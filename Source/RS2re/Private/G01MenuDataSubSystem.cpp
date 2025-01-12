#include "G01MenuDataSubSystem.h"

UG01MenuDataSubSystem::UG01MenuDataSubSystem() {
    this->BattleSealedRequestedFlag = false;
}

void UG01MenuDataSubSystem::SetShopSortIndexData(const FG01MenuSortSaveDataStruct InSortIndexData) {
}

void UG01MenuDataSubSystem::SetPreviewMasterLevelData(const TMap<EG01BattleArtsType, int32> InPreviewMasterLevelData) {
}

void UG01MenuDataSubSystem::SetMenuSortIndexData(const FG01MenuSortSaveDataStruct InSortIndexData) {
}

void UG01MenuDataSubSystem::SetImperialPowerData(const FG01ImperialPowerSaveDataStruct InImperialPowerData) {
}

FG01MenuSortSaveDataStruct UG01MenuDataSubSystem::GetShopSortIndexData() const {
    return FG01MenuSortSaveDataStruct{};
}

TMap<EG01BattleArtsType, int32> UG01MenuDataSubSystem::GetPreviewMasterLevelData() const {
    return TMap<EG01BattleArtsType, int32>();
}

FG01MenuSortSaveDataStruct UG01MenuDataSubSystem::GetMenuSortIndexData() const {
    return FG01MenuSortSaveDataStruct{};
}

FG01ImperialPowerSaveDataStruct UG01MenuDataSubSystem::GetImperialPowerData() const {
    return FG01ImperialPowerSaveDataStruct{};
}


