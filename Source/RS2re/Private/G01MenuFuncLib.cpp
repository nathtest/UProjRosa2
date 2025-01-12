#include "G01MenuFuncLib.h"

UG01MenuFuncLib::UG01MenuFuncLib() {
}

void UG01MenuFuncLib::UpdateIndexByInput(int32 InCalculation, int32 InCurrentIndex, int32 InMin, int32 InMax, bool InIsPressing, int32& ReIndex, bool& ReChanged, bool& ReIsTurn) {
}

void UG01MenuFuncLib::SortArtsList(UObject* InWorldContext, const TArray<FG01PartyLearnArtsStruct>& InArtsList, const TArray<FG01BattleArtsTableRow>& InArtsDataList, TArray<FG01PartyLearnArtsStruct>& ReArtsList, TArray<FG01BattleArtsTableRow>& ReArtsDataList) {
}

void UG01MenuFuncLib::MenuSort(TArray<FG01ShopSellDataStruct> InList, bool IsASC, TArray<FG01ShopSellDataStruct>& OutList) {
}

void UG01MenuFuncLib::MenuMapSort(TArray<FG01MenuSortDataStruct> InList, bool IsASC, TArray<FG01MenuSortDataStruct>& OutList) {
}

void UG01MenuFuncLib::MenuArraySort(TArray<int32> InList, bool IsASC, TArray<int32>& OutList) {
}

void UG01MenuFuncLib::IsInRange(int32 InLength, int32 InIndex, bool& ReIsInRange) {
}

void UG01MenuFuncLib::GetShieldResistance(const FG01ItemShieldDataStruct& InShieldData, TMap<EG01AddedPotentEnhanceTypeEnum, int32>& ReResistance) {
}

void UG01MenuFuncLib::GetPriorityWeaponList(const FG01SkillLevel& InSkillLevel, TMap<EG01BattleArtsType, int32>& ReSkillLevel) {
}

void UG01MenuFuncLib::GetClassifyResistance(const FG01CharaResistance& InResistance, TMap<EG01AddedPotentEnhanceTypeEnum, int32>& ReResistance) {
}

void UG01MenuFuncLib::GetCharacterLearnedArtsTypes(UG01PartyManagerAccessor* InPartyManager, UG01BattleArtsManagerAccessor* InArtsManager, FG01CharacterID InCharacterId, TArray<EG01BattleArtsType>& OutTypes) {
}

void UG01MenuFuncLib::GetArtsIconInfoFromArtsData(FG01BattleArtsTableRow InArtsData, EG01BattleArtsType& OutPrimaryIconType, EG01BattleArtsType& OutSecondaryIconType) {
}

void UG01MenuFuncLib::GetArtsIconInfo(UG01BattleArtsManagerAccessor* InArtsManager, FName InBattleArtsId, EG01BattleArtsType& OutPrimaryIconType, EG01BattleArtsType& OutSecondaryIconType, bool& OutIsFathom) {
}

void UG01MenuFuncLib::GetArmorResistance(const FG01ItemArmorDataStruct& InArmorData, TMap<EG01AddedPotentEnhanceTypeEnum, int32>& ReResistance) {
}

void UG01MenuFuncLib::GetAllCharacterClasses(UG01PartyManagerAccessor* InPartyManager, UG01AbilityManagerAccessor* InAbilityManager, TArray<FG01CharacterID>& OutCharacters) {
}

void UG01MenuFuncLib::ConvertToText(UTextSystemManagerAccessComponent* InTextSystemManagerAccessor, const FName& InTextID, FText& ReText) {
}

void UG01MenuFuncLib::ConvertToCommaText(const FText& InText, const EG01MenuCommaEnum& InCommaType, FText& ReText) {
}

void UG01MenuFuncLib::ConvertAbilityExplanationText(const FString& InExplanationText, TArray<int32> InEffectList, TArray<int32> InConditionList, TArray<int32> InRateList, TArray<int32>& OutParam) {
}

void UG01MenuFuncLib::AutoWeaponPrioritySort(TMap<EG01BattleArtsType, int32> InSkillLevel, TMap<EG01BattleArtsType, int32>& ReSkillLevel) {
}


