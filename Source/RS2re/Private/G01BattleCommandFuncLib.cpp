#include "G01BattleCommandFuncLib.h"

UG01BattleCommandFuncLib::UG01BattleCommandFuncLib() {
}

void UG01BattleCommandFuncLib::LotteryByWeight(const TArray<int32>& InWeightList, bool& OutSuccess, int32& OutIndex) {
}

void UG01BattleCommandFuncLib::IsCommandMoveRelated(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReEqual) {
}

void UG01BattleCommandFuncLib::EqualsCommandTarget(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReEqual) {
}

void UG01BattleCommandFuncLib::EqualsCommandSource(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReEqual) {
}

void UG01BattleCommandFuncLib::EqualsCommandAction(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReEqual) {
}

void UG01BattleCommandFuncLib::EqualsCommand(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReEqual) {
}

void UG01BattleCommandFuncLib::CreateItemArtsUnitList(AActor* InActor, const TArray<FName>& InList, TArray<FG01BattleCharacterItemArtsUnitStruct>& OutList) {
}

void UG01BattleCommandFuncLib::CreateDefenseArtsUnitList(AActor* InActor, const TArray<FName>& InList, TArray<FG01BattleCharacterDefenseArtsUnitStruct>& OutList) {
}

void UG01BattleCommandFuncLib::CommandIndexOf(const TArray<FG01BattleCommandUnit>& InList, const FG01BattleCommandUnit& InUnit, bool& ReFound, int32& ReIndex) {
}

void UG01BattleCommandFuncLib::CalcRateByWeight(const TArray<int32>& InWeightList, int32 InElemNo, float& OutRate) {
}

void UG01BattleCommandFuncLib::CalcPercentByWeight(const TArray<int32>& InWeightList, int32 InElemNo, int32& OutPercent) {
}


