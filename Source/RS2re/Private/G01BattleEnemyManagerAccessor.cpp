#include "G01BattleEnemyManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01BattleEnemyManagerAccessor::UG01BattleEnemyManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_BATTLEENEMY;
}

void UG01BattleEnemyManagerAccessor::RobEnemyDropItem(AActor* InActor, int32 InDropSlotNo, bool& OutSuccess, FG01BattleDropItemResult& OutDropItem) {
}

void UG01BattleEnemyManagerAccessor::ResetCommandThink(AActor* InActor, FG01BattleEnemyCommandThinkStruct& InThink) {
}

void UG01BattleEnemyManagerAccessor::MakeCommandThink(AActor* InActor, const FG01BattleEnemyCommandTableRow& InCommandRow, FG01BattleEnemyCommandThinkStruct& OutThink) {
}

void UG01BattleEnemyManagerAccessor::LotteryEnemyDropItem(TArray<FG01BattleDropItemResult>& OutDropItemList) {
}

void UG01BattleEnemyManagerAccessor::LotteryCommandTarget(AActor* InActor, int32 InActionCountID, FName InArtsID, AActor*& OutTarget) {
}

void UG01BattleEnemyManagerAccessor::LotteryCommand(AActor* InActor, int32 InActionCountID, FName& OutArtsID, AActor*& OutTarget) {
}

void UG01BattleEnemyManagerAccessor::GetOriginalIDList(TArray<FName>& OutOriginalIdList) {
}

void UG01BattleEnemyManagerAccessor::GetEnemyIDByCharacterID(FG01CharacterID InCharacterId, FName& OutEnemyID) {
}

void UG01BattleEnemyManagerAccessor::GetEnemyDropItemOpenFlag(FName InBattleCharaId, TArray<bool>& OutOpenFlag) {
}

void UG01BattleEnemyManagerAccessor::GetEnemyDefeatMap(TMap<FName, int32>& OutDefeatMap) {
}

void UG01BattleEnemyManagerAccessor::GetEnemyConfirmMap(TMap<FName, int32>& OutConfirmMap) {
}

void UG01BattleEnemyManagerAccessor::GetEnemyAffinityOpenFlag(FName InBattleCharaId, TArray<bool>& OutOpenFlag) {
}

void UG01BattleEnemyManagerAccessor::GetCommandPattern(FName InEnemyID, TArray<FG01BattleEnemyCommandTableRow>& OutPatternList) {
}

void UG01BattleEnemyManagerAccessor::GetCharacterIDByEnemyID(FName InEnemyID, FG01CharacterID& OutCharacterId) {
}

void UG01BattleEnemyManagerAccessor::FindBattleEnemyFormation(FName InRowName, bool& OutFound, FG01BattleEnemyFormationTableRow& OutRow) {
}

void UG01BattleEnemyManagerAccessor::FindBattleEnemyEnhance(const FG01BattleEnemyEnhanceFindKey& InFindKey, bool& OutFound, FName& OutRowName, FG01BattleEnemyEnhanceTableRow& OutRow) {
}

void UG01BattleEnemyManagerAccessor::FindBattleEnemy(FName InRowName, bool& OutFound, FG01BattleEnemyTableRow& OutRow) {
}

void UG01BattleEnemyManagerAccessor::DeleteCommandThink(AActor* InActor, FG01BattleEnemyCommandThinkStruct& InThink) {
}

void UG01BattleEnemyManagerAccessor::DecideEnemyTeam(FG01BattleData& InBattleData, bool& OutLotFormation, bool& OutLotSubEnemy) {
}

void UG01BattleEnemyManagerAccessor::ConvertOriginalID(FName InBattleCharaId, FName& OutOriginalID) {
}

void UG01BattleEnemyManagerAccessor::CollectEnemyAppearList_Implementation(FName InLocationId, FRoomID InRoomId, bool InCurrentQuestSection, TArray<FG01BattleEnemyAppearTableRow>& OutList) {
}

void UG01BattleEnemyManagerAccessor::CalcTargetWeight(AActor* InTarget, int32& OutTargetWeight) {
}


