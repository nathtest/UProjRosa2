#include "G01SaveGameData.h"

UG01SaveGameData::UG01SaveGameData() {
    this->IsForceArtsRegist = false;
}

void UG01SaveGameData::SetShopSortIndexData(const FG01MenuSortSaveDataStruct InShopSortData) {
}

void UG01SaveGameData::SetPreviewMasterLevelData(const TMap<EG01BattleArtsType, int32> InPreviewMasterLevelData) {
}

void UG01SaveGameData::SetPeriodSaveData(const FG01PeriodSaveInfo& InData) {
}

void UG01SaveGameData::SetMenuSortIndexData(const FG01MenuSortSaveDataStruct InMenuSortData) {
}

void UG01SaveGameData::SetLevelMoveData(const FG01LevelMoveSaveInfo& InData) {
}

void UG01SaveGameData::SetInventoryExtractionInfo(const FG01InventorySubsystemExtractionStruct& InData) {
}

void UG01SaveGameData::SetImperialPowerData(const FG01ImperialPowerSaveDataStruct InShopSortData) {
}

void UG01SaveGameData::SetHistory(const FG01HistorySaveInfo& InHistory) {
}

void UG01SaveGameData::SetFieldSaveInfo(const FG01FieldSaveInfo& InSaveInfo) {
}

void UG01SaveGameData::SetCharacterSaveInfo(const FG01CharacterSaveInfo& InSaveInfo) {
}

void UG01SaveGameData::SetBattleSaveInfo(const FG01BattleSaveInfo& InSaveInfo) {
}

void UG01SaveGameData::SetBattleBossRecordTable(const TMap<FName, FG01BattleBossRecordDataStruct>& InSaveInfo) {
}

bool UG01SaveGameData::IsTrialClear() const {
    return false;
}

bool UG01SaveGameData::HasAnyStoryClear(int32 InFlags) const {
    return false;
}

bool UG01SaveGameData::HasAllStoryClear(int32 InFlags) const {
    return false;
}

TArray<FName> UG01SaveGameData::GetWorldMapVisibleIconIdList() const {
    return TArray<FName>();
}

FG01TutorialSaveInfo UG01SaveGameData::GetTutorialData() const {
    return FG01TutorialSaveInfo{};
}

TArray<FG01PartyLearnArtsStruct> UG01SaveGameData::GetSpellList() const {
    return TArray<FG01PartyLearnArtsStruct>();
}

TArray<FG01PartyLearnArtsStruct> UG01SaveGameData::GetSkillList() const {
    return TArray<FG01PartyLearnArtsStruct>();
}

TMap<FName, int32> UG01SaveGameData::GetShopStockDataList() const {
    return TMap<FName, int32>();
}

FG01MenuSortSaveDataStruct UG01SaveGameData::GetShopSortIndexData() const {
    return FG01MenuSortSaveDataStruct{};
}

FG01SaveLoadDataStruct UG01SaveGameData::GetSaveLoadDataStruct() const {
    return FG01SaveLoadDataStruct{};
}

TArray<FG01PartyLearnArtsStruct> UG01SaveGameData::GetRegisterArtsList() const {
    return TArray<FG01PartyLearnArtsStruct>();
}

FG01QuestSaveInfo UG01SaveGameData::GetQuestSaveInfo2() const {
    return FG01QuestSaveInfo{};
}

TMap<EG01BattleArtsType, int32> UG01SaveGameData::GetPreviewMasterLevelData() const {
    return TMap<EG01BattleArtsType, int32>();
}

FG01PeriodSaveInfo UG01SaveGameData::GetPeriodSaveData() const {
    return FG01PeriodSaveInfo{};
}

FG01MenuSortSaveDataStruct UG01SaveGameData::GetMenuSortIndexData() const {
    return FG01MenuSortSaveDataStruct{};
}

FG01MapMaskParamInfo UG01SaveGameData::GetMapMaskListInfo() const {
    return FG01MapMaskParamInfo{};
}

TArray<FName> UG01SaveGameData::GetMainMenuTechArtNewList() const {
    return TArray<FName>();
}

FG01LevelMoveSaveInfo UG01SaveGameData::GetLevelMoveData() const {
    return FG01LevelMoveSaveInfo{};
}

TArray<FG01PartyLearnArtsStruct> UG01SaveGameData::GetLearnArtsList() const {
    return TArray<FG01PartyLearnArtsStruct>();
}

FG01InventorySubsystemExtractionStruct UG01SaveGameData::GetInventryExtractionInfo() const {
    return FG01InventorySubsystemExtractionStruct{};
}

FG01ImperialPowerSaveDataStruct UG01SaveGameData::GetImperialPowerData() const {
    return FG01ImperialPowerSaveDataStruct{};
}

FG01HistorySaveInfo UG01SaveGameData::GetHistory() const {
    return FG01HistorySaveInfo{};
}

FG01GamePlayDataSaveInfo UG01SaveGameData::GetGamePlayData() const {
    return FG01GamePlayDataSaveInfo{};
}

TArray<FName> UG01SaveGameData::GetFinishedDevelopItemIdList() const {
    return TArray<FName>();
}

FG01FieldSaveInfo UG01SaveGameData::GetFieldSaveInfo() const {
    return FG01FieldSaveInfo{};
}

TArray<FG01PartyLearnArtsStruct> UG01SaveGameData::GetFathomList() const {
    return TArray<FG01PartyLearnArtsStruct>();
}

TArray<FRoomID> UG01SaveGameData::GetCompleteMaskList() const {
    return TArray<FRoomID>();
}

FG01CharacterSaveInfo UG01SaveGameData::GetCharacterSaveInfo() const {
    return FG01CharacterSaveInfo{};
}

FG01BattleSaveInfo UG01SaveGameData::GetBattleSaveInfo() const {
    return FG01BattleSaveInfo{};
}

TMap<FName, FG01BattleBossRecordDataStruct> UG01SaveGameData::GetBattleBossRecordTable() const {
    return TMap<FName, FG01BattleBossRecordDataStruct>();
}


