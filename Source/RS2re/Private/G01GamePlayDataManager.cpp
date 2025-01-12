#include "G01GamePlayDataManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObserverSubjectComponent -FallbackName=ObserverSubjectComponent
#include "G01PeriodManagerAccessor.h"

AG01GamePlayDataManager::AG01GamePlayDataManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObserverSubject = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubject"));
    this->PeriodManagerAccessor = CreateDefaultSubobject<UG01PeriodManagerAccessor>(TEXT("PeriodManagerAccessor"));
    this->EventPointTable = NULL;
    this->IncomeEventTable = NULL;
    this->IncomeGetConditionTable = NULL;
    this->ImperialForceLevelTable = NULL;
    this->ImperialForcePointTable = NULL;
    this->EnemyForceLevelTable = NULL;
    this->MaxtImperialCrown = 0;
    this->MinImperialLevel = 1;
    this->MaxImperialLevel = 10;
    this->MinEnemyForceLevel = 1;
    this->MaxEnemyForceLevel = 16;
}

bool AG01GamePlayDataManager::TryUpdateEnemyForcePoint(bool InIsForce) {
    return false;
}

void AG01GamePlayDataManager::SetLastEmperorCharacterIDByClass_Implementation(EG01FriendClass InFriendClass) {
}

void AG01GamePlayDataManager::SetLastEmperorCharacterID(FG01CharacterID InCharacterId) {
}

void AG01GamePlayDataManager::SetImperialCrown(int32 InPoint) {
}

void AG01GamePlayDataManager::SetGamePlayModeType(EG01GamePlayModeType InPlayMode) {
}

void AG01GamePlayDataManager::SetGamePlayDataPlayTime(FG01SaveLoadPlayTimeStruct InPlayTime) {
}

void AG01GamePlayDataManager::SetGameDifficultyType(EG01GameDifficultyType InDifficultyType) {
}

void AG01GamePlayDataManager::SetCrown(int32 InPoint) {
}

void AG01GamePlayDataManager::SetClearArea(int32 InCount) {
}

void AG01GamePlayDataManager::ResetBattleCount() {
}

bool AG01GamePlayDataManager::OnUpdateImperialForcePoint() {
    return false;
}

int32 AG01GamePlayDataManager::GetMaxEnemyForcePoint() {
    return 0;
}

FG01CharacterID AG01GamePlayDataManager::GetLastEmperorCharacterID_Implementation() const {
    return FG01CharacterID{};
}

int32 AG01GamePlayDataManager::GetImperialLevel() {
    return 0;
}

EG01GamePlayModeType AG01GamePlayDataManager::GetGamePlayModeType() const {
    return EG01GamePlayModeType::CLASSIC;
}

UG01GamePlayDataSubsystem* AG01GamePlayDataManager::GetGamePlayDataSubsystem() const {
    return NULL;
}

EG01GameDifficultyType AG01GamePlayDataManager::GetGameDifficultyType() const {
    return EG01GameDifficultyType::CASUAL;
}

int32 AG01GamePlayDataManager::GetEnemyForcePoint() {
    return 0;
}

void AG01GamePlayDataManager::GetEnemyForceLevelData(FG01EnemyForceLevelTableRow& OutRow) {
}

int32 AG01GamePlayDataManager::GetEnemyForceLevel() {
    return 0;
}

int32 AG01GamePlayDataManager::FindImperialPointForLevel(int32 InLevel) {
    return 0;
}

void AG01GamePlayDataManager::FindImperialForceLevel(int32 InPoint, bool& OutExist, int32& OutLevel) {
}

int32 AG01GamePlayDataManager::FindEnemyForcePointForLevel(int32 InLevel) {
    return 0;
}


