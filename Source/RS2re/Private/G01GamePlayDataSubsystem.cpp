#include "G01GamePlayDataSubsystem.h"

UG01GamePlayDataSubsystem::UG01GamePlayDataSubsystem() {
    this->MyHelperObject = NULL;
    this->LastestBossTurnCount = -1;
}

void UG01GamePlayDataSubsystem::SetUnderBossBreak(bool BossUnderBreak) {
}

void UG01GamePlayDataSubsystem::SetTotalBattleWinCount(int32 InCount) {
}

void UG01GamePlayDataSubsystem::SetTotalBattleLoseCount(int32 InCount) {
}

void UG01GamePlayDataSubsystem::SetTotalBattleEscapeCount(int32 InCount) {
}

void UG01GamePlayDataSubsystem::SetTotalBattleCount(int32 InCount) {
}

void UG01GamePlayDataSubsystem::SetShopStockData(TMap<FName, int32> InStockData) {
}

void UG01GamePlayDataSubsystem::SetSaveLoadDataCache(const TArray<FG01SaveLoadDataCache>& InCacheData) {
}

void UG01GamePlayDataSubsystem::SetPlayTime(FG01SaveLoadPlayTimeStruct PlayTime) {
}

void UG01GamePlayDataSubsystem::SetPeriodBattleCount(int32 InCount) {
}

void UG01GamePlayDataSubsystem::SetMainMenuTechArtNewList(TArray<FName> TechArtsList) {
}

void UG01GamePlayDataSubsystem::SetIsTrialClear(bool InClear) {
}

void UG01GamePlayDataSubsystem::SetIncomeCoefficient(float InCoefficient) {
}

void UG01GamePlayDataSubsystem::SetIncome(int32 InNum) {
}

void UG01GamePlayDataSubsystem::SetImperialPoint(int32 InNum) {
}

void UG01GamePlayDataSubsystem::SetImperialLevel(int32 InNum) {
}

void UG01GamePlayDataSubsystem::SetImperialIncome(int32 InNum) {
}

void UG01GamePlayDataSubsystem::SetImperialCrown(int32 InNum) {
}

void UG01GamePlayDataSubsystem::SetGameDifficultyType(EG01GameDifficultyType InDifficultyType) {
}

void UG01GamePlayDataSubsystem::SetEnemyForcePoint(int32 InPoint) {
}

void UG01GamePlayDataSubsystem::SetEnemyForceLevel(int32 InLevel) {
}

void UG01GamePlayDataSubsystem::SetCrown(int32 InNum) {
}

void UG01GamePlayDataSubsystem::SetClearAreaCount(int32 InCount) {
}

void UG01GamePlayDataSubsystem::SetBreakSevenHeroes(TArray<EG01SaveLoadSevenHeroesType> SevenHeroesList) {
}

void UG01GamePlayDataSubsystem::SetBossBreak(bool BossBreak) {
}

void UG01GamePlayDataSubsystem::RemoveSaveData(const FSaveDataRequestInfo& InRequest) {
}

bool UG01GamePlayDataSubsystem::GetUnderBossBreak() const {
    return false;
}

int32 UG01GamePlayDataSubsystem::GetTotalBattleWinCount() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetTotalBattleLoseCount() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetTotalBattleEscapeCount() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetTotalBattleCount() const {
    return 0;
}

bool UG01GamePlayDataSubsystem::GetStopBattleWinCountOfTrial() const {
    return false;
}

TMap<FName, int32> UG01GamePlayDataSubsystem::GetShopItemStockData() const {
    return TMap<FName, int32>();
}

TArray<FG01SaveLoadDataCache> UG01GamePlayDataSubsystem::GetSaveLoadDataCache() const {
    return TArray<FG01SaveLoadDataCache>();
}

int32 UG01GamePlayDataSubsystem::GetQuestClearAreaCount() const {
    return 0;
}

FG01SaveLoadPlayTimeStruct UG01GamePlayDataSubsystem::GetPlayTime() const {
    return FG01SaveLoadPlayTimeStruct{};
}

int32 UG01GamePlayDataSubsystem::GetPeriodBattleCount() const {
    return 0;
}

TArray<FName> UG01GamePlayDataSubsystem::GetMainMenuTechArtNewList() const {
    return TArray<FName>();
}

int32 UG01GamePlayDataSubsystem::GetInitialImperialPoint() const {
    return 0;
}

TArray<FG01IncomeEventIDStruct> UG01GamePlayDataSubsystem::GetIncomeEventIDList() {
    return TArray<FG01IncomeEventIDStruct>();
}

float UG01GamePlayDataSubsystem::GetIncomeCoefficient() const {
    return 0.0f;
}

int32 UG01GamePlayDataSubsystem::GetIncome() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetImperialPoint() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetImperialLevel() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetImperialIncome() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetImperialCrown() const {
    return 0;
}

void UG01GamePlayDataSubsystem::GetHelperObject(UG01GamePlayDataSubsystemHelper*& OutHelper) {
}

EG01GameDifficultyType UG01GamePlayDataSubsystem::GetGameDifficultyType() const {
    return EG01GameDifficultyType::CASUAL;
}

int32 UG01GamePlayDataSubsystem::GetEnemyForcePoint() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetEnemyForceLevel() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetCrown() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetClearAreaCount() const {
    return 0;
}

int32 UG01GamePlayDataSubsystem::GetBreakSevenHeroesNum() const {
    return 0;
}

TArray<EG01SaveLoadSevenHeroesType> UG01GamePlayDataSubsystem::GetBreakSevenHeroesList() const {
    return TArray<EG01SaveLoadSevenHeroesType>();
}

bool UG01GamePlayDataSubsystem::GetBossBreak() const {
    return false;
}

void UG01GamePlayDataSubsystem::AddQuestClearCount() {
}

void UG01GamePlayDataSubsystem::AddIncomeEventID(FG01IncomeEventIDStruct InEventID) {
}


