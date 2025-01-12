#include "G01BattleEnemyManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01BattleEnemyManager::AG01BattleEnemyManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_BATTLEENEMY;
    this->BattleEnemyDataAsset = NULL;
    this->CurrentDifficultyType = EG01GameDifficultyType::CASUAL;
    this->ItemDropRemainCount = 0;
}

void AG01BattleEnemyManager::LotteryByWeight(const TArray<int32>& InWeightList, int32& OutIndex) {
}

void AG01BattleEnemyManager::FindCommandTarget(FName InRowName, bool& OutFound, FG01BattleEnemyCommandTargetTableRow& OutRow) {
}

void AG01BattleEnemyManager::FindCommandRoutine(FName InRowName, bool& OutFound, FG01BattleEnemyCommandRoutineTableRow& OutRow) {
}

void AG01BattleEnemyManager::FindCommandChange(FName InRowName, bool& OutFound, FG01BattleEnemyCommandChangeTableRow& OutRow) {
}

void AG01BattleEnemyManager::FindBattleEnemyFormation(FName InRowName, bool& OutFound, FG01BattleEnemyFormationTableRow& OutRow) {
}

void AG01BattleEnemyManager::FindBattleEnemyEnhance(const FG01BattleEnemyEnhanceFindKey& InFindKey, bool& OutFound, FName& OutRowName, FG01BattleEnemyEnhanceTableRow& OutRow) {
}

void AG01BattleEnemyManager::FindBattleEnemy(FName InRowName, bool& OutFound, FG01BattleEnemyTableRow& OutRow) {
}

void AG01BattleEnemyManager::DecideEnemyTeam(FG01BattleData& InBattleData, bool& OutLotFormation, bool& OutLotSubEnemy) {
}

void AG01BattleEnemyManager::DBG_SendCommandLogLotteryTargetPriority(FName InPriorityId, UG01BattleEnemyThinkTargetSelect* InTargetSelect, const TArray<AAppActor*>& InTargetList, int32 InDecideIndex) {
}

void AG01BattleEnemyManager::DBG_SendCommandLogLotteryTargetDefault(const TArray<AAppActor*>& InTargetList, const TArray<int32>& InWeightList, int32 InDecideIndex) {
}

void AG01BattleEnemyManager::DBG_SendCommandLogLotteryTargetAlly(const TArray<AAppActor*>& InTargetList, int32 InDecideIndex) {
}

void AG01BattleEnemyManager::DBG_SendCommandLogLotteryArts(FName InPatternId, int32 InTableIndex, const TArray<FName>& InArtsIdList, const TArray<int32>& InWeightList, int32 InDecideIndex) {
}

void AG01BattleEnemyManager::DBG_CommandLogEnd() {
}

void AG01BattleEnemyManager::DBG_CommandLogBegin(AActor* InCharacter) {
}


