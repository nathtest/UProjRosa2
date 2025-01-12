#include "G01BattleArtsFuncLib.h"

UG01BattleArtsFuncLib::UG01BattleArtsFuncLib() {
}

void UG01BattleArtsFuncLib::MakeStatusSpellArtsTypeList(TArray<EG01BattleArtsType>& OutList) {
}

void UG01BattleArtsFuncLib::MakeStatusSkillArtsTypeList(TArray<EG01BattleArtsType>& OutList) {
}

void UG01BattleArtsFuncLib::MakeStatusArtsTypeList(TArray<EG01BattleArtsType>& OutList) {
}

void UG01BattleArtsFuncLib::IsSpellArts(EG01BattleArtsType InType, bool& Re) {
}

void UG01BattleArtsFuncLib::IsSkillArts(EG01BattleArtsType InType, bool& Re) {
}

void UG01BattleArtsFuncLib::IsRecoverArts(const FG01BattleArtsTableRow& InArts, bool& Out) {
}

void UG01BattleArtsFuncLib::IsItemArts(EG01BattleArtsType InType, bool& Re) {
}

void UG01BattleArtsFuncLib::IsCombineSpellArts(EG01BattleArtsType InType, bool& Re) {
}

void UG01BattleArtsFuncLib::IsBasicSpellArts(EG01BattleArtsType InType, bool& Re) {
}

void UG01BattleArtsFuncLib::GetTargetSelectForDisp(const FG01BattleArtsTableRow& InArts, EG01BattleArtsTargetSelection& Out) {
}

void UG01BattleArtsFuncLib::GetSrcSpellArtsType(EG01BattleArtsType InCombineSpellArtsType, EG01BattleArtsType& ReSrcSpellArtsType1, EG01BattleArtsType& ReSrcSpellArtsType2) {
}

void UG01BattleArtsFuncLib::GetOppositeSpellArtsType(EG01BattleArtsType InSpellArtsType, EG01BattleArtsType& ReOppositeSpellArtsType) {
}

void UG01BattleArtsFuncLib::CalcOffsetToSequencePlayTransformByActorSize(AActor* InSourceActor, TArray<AActor*> InTargetActorList, FTransform& OutOffset) {
}


