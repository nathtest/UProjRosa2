#include "G01GamePlayDataManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01GamePlayDataManagerAccessor::UG01GamePlayDataManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_GAMEPLAYDATA;
}

void UG01GamePlayDataManagerAccessor::TryUpdateEnemyForcePoint() {
}

void UG01GamePlayDataManagerAccessor::SubImperialCrown(int32 InNum) {
}

void UG01GamePlayDataManagerAccessor::SubCrown(int32 InNum) {
}

void UG01GamePlayDataManagerAccessor::SetUserInputName(const FText& InInputName) {
}

void UG01GamePlayDataManagerAccessor::SetUnderBossBreak(bool BossUnderBreak) {
}

void UG01GamePlayDataManagerAccessor::SetShopStockData(TMap<FName, int32> InStockData) {
}

void UG01GamePlayDataManagerAccessor::SetSaveLoadData(const FG01SaveLoadDataStruct& SaveLoadDataStruct) {
}

void UG01GamePlayDataManagerAccessor::SetPlayTime(const FG01SaveLoadPlayTimeStruct& InPlayTime) {
}

void UG01GamePlayDataManagerAccessor::SetLowestGameDifficultyType(EG01GameDifficultyType InDifficultyType) {
}

void UG01GamePlayDataManagerAccessor::SetLastEmperorCharacterIDByClass(EG01FriendClass InFriendClass) {
}

void UG01GamePlayDataManagerAccessor::SetLastEmperorCharacterID(FG01CharacterID InCharacterId) {
}

void UG01GamePlayDataManagerAccessor::SetImperialCrown(int32 InNum) {
}

void UG01GamePlayDataManagerAccessor::SetGamePlayModeType(EG01GamePlayModeType InPlayMode) {
}

void UG01GamePlayDataManagerAccessor::SetGameDifficultyType(EG01GameDifficultyType InDifficultyType) {
}

void UG01GamePlayDataManagerAccessor::SetCrown(int32 InNum) {
}

void UG01GamePlayDataManagerAccessor::SetBreakSevenHeroesList(const TArray<EG01SaveLoadSevenHeroesType>& BreakSevenHeroesList) {
}

void UG01GamePlayDataManagerAccessor::SetBossBreak(bool BossBreak) {
}

void UG01GamePlayDataManagerAccessor::ResetIncome() {
}

void UG01GamePlayDataManagerAccessor::RemoveStoryClearFlags(EG01GameStoryClearFlags InRemoveStory) {
}

void UG01GamePlayDataManagerAccessor::RemoveMenuTechArtsNewIconData(FName InRemoveIconID) {
}

bool UG01GamePlayDataManagerAccessor::IsClearStory(EG01GameStoryClearFlags InStory) const {
    return false;
}

FText UG01GamePlayDataManagerAccessor::GetUserInputName() const {
    return FText::GetEmpty();
}

bool UG01GamePlayDataManagerAccessor::GetUnderBossBreak() {
    return false;
}

int32 UG01GamePlayDataManagerAccessor::GetTotalBattleWinCount() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetTotalBattleLoseCount() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetTotalBattleEscapeCount() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetTotalBattleCount() const {
    return 0;
}

bool UG01GamePlayDataManagerAccessor::GetStopBattleWinCountOfTrial() const {
    return false;
}

TMap<FName, int32> UG01GamePlayDataManagerAccessor::GetShopItemStockData() const {
    return TMap<FName, int32>();
}

FG01SaveLoadDataStruct UG01GamePlayDataManagerAccessor::GetSaveLoadStruct() const {
    return FG01SaveLoadDataStruct{};
}

FG01SaveLoadPlayTimeStruct UG01GamePlayDataManagerAccessor::GetPlayTime() const {
    return FG01SaveLoadPlayTimeStruct{};
}

int32 UG01GamePlayDataManagerAccessor::GetPeriodBattleCount() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetNextLevelImperialPoint() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetNextLevelEnemyForcePoint() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetMinImperialLevel() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetMinEnemyForceLevel() const {
    return 0;
}

TArray<FName> UG01GamePlayDataManagerAccessor::GetMenuTechArtsNewIconDataList() {
    return TArray<FName>();
}

int32 UG01GamePlayDataManagerAccessor::GetMaxImperialPiont() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetMaxImperialLevel() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetMaxEnemyForcePoint() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetMaxEnemyForceLevel() const {
    return 0;
}

EG01GameDifficultyType UG01GamePlayDataManagerAccessor::GetLowestGameDifficultyType() {
    return EG01GameDifficultyType::CASUAL;
}

FG01CharacterID UG01GamePlayDataManagerAccessor::GetLastEmperorCharacterID() const {
    return FG01CharacterID{};
}

int32 UG01GamePlayDataManagerAccessor::GetInitialImperialPoint() const {
    return 0;
}

TArray<FG01IncomeEventIDStruct> UG01GamePlayDataManagerAccessor::GetIncomeEventIDList() {
    return TArray<FG01IncomeEventIDStruct>();
}

float UG01GamePlayDataManagerAccessor::GetIncomeCoefficient() const {
    return 0.0f;
}

int32 UG01GamePlayDataManagerAccessor::GetIncome() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetImperialPoint() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetImperialLevel() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetImperialIncome() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetImperialCrown() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetGameQuestClearCount() const {
    return 0;
}

EG01GamePlayModeType UG01GamePlayDataManagerAccessor::GetGamePlayModeType() const {
    return EG01GamePlayModeType::CLASSIC;
}

EG01GameDifficultyType UG01GamePlayDataManagerAccessor::GetGameDifficultyType() const {
    return EG01GameDifficultyType::CASUAL;
}

int32 UG01GamePlayDataManagerAccessor::GetGameClearCount() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetEnemyForcePoint() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetEnemyForceLevel() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetCurrentLevelImperialPoint() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetCurrentLevelEnemyForcePoint() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetCrown() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetClearAreaCount() const {
    return 0;
}

int32 UG01GamePlayDataManagerAccessor::GetBreakSevenHeroesNum() const {
    return 0;
}

TArray<EG01SaveLoadSevenHeroesType> UG01GamePlayDataManagerAccessor::GetBreakSevenHeroesList() const {
    return TArray<EG01SaveLoadSevenHeroesType>();
}

bool UG01GamePlayDataManagerAccessor::GetBossBreak() {
    return false;
}

void UG01GamePlayDataManagerAccessor::Debug_SetImperialPoint(int32 InPoint) {
}

void UG01GamePlayDataManagerAccessor::ChangeIncomeEventFlag(FG01IncomeEventIDStruct InEventID, const bool InIsActive) {
}

void UG01GamePlayDataManagerAccessor::AddStoryClearFlags(EG01GameStoryClearFlags InAddStory) {
}

void UG01GamePlayDataManagerAccessor::AddMenuTechArtsNewIconData(FName InAddIconID) {
}

void UG01GamePlayDataManagerAccessor::AddIncome(FG01IncomeEventIDStruct InIncomeEventID) {
}

void UG01GamePlayDataManagerAccessor::AddImperialForcePoint(FG01ImperialForcePointIDStruct InPointID) {
}

void UG01GamePlayDataManagerAccessor::AddImperialCrown(int32 InNum) {
}

void UG01GamePlayDataManagerAccessor::AddGameClearCount() {
}

void UG01GamePlayDataManagerAccessor::AddCrown(int32 InNum) {
}


