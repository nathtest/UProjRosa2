#include "G01DamageFuncLib.h"

UG01DamageFuncLib::UG01DamageFuncLib() {
}

void UG01DamageFuncLib::IsNoneAttributeByFlags(bool InCut, bool InBlow, bool InThrust, bool InHeat, bool InCold, bool InThunder, bool InLight, bool InDark, bool InSword, bool InGreatSword, bool InShortSword, bool InSpear, bool InAxe, bool InClub, bool InBow, bool InMartial, bool InPyrology, bool InHydrology, bool InTerrology, bool InAerology, bool InCosmology, bool InUmbrology, bool& Re) {
}

void UG01DamageFuncLib::IsNoneAttributeByArts(const FG01BattleArtsTableRow& InArts, bool& Re) {
}

void UG01DamageFuncLib::HasAnyAffinity(const FG01BattleArtsTableRow& InArts, bool& Re) {
}

void UG01DamageFuncLib::GetRefStatusList(TArray<EG01BattleArtsRefStatus> InRefStatus, const FG01CharaStatus& InCharaStatus, int32& ReStatus) {
}

void UG01DamageFuncLib::GetRefStatus(EG01BattleArtsRefStatus InRefStatus, const FG01CharaStatus& InCharaStatus, int32& ReStatus) {
}

void UG01DamageFuncLib::GetRefLvList(TArray<EG01BattleArtsRefLevel> InRefLv, const FG01SkillLevel& InSkillLv, const FG01SpellLevel& InSpellLv, int32& ReLv) {
}

void UG01DamageFuncLib::GetRefLv(EG01BattleArtsRefLevel InRefLv, const FG01SkillLevel& InSkillLv, const FG01SpellLevel& InSpellLv, int32& ReLv) {
}

void UG01DamageFuncLib::GetImpactValueLv(EG01BattleArtsImpactType InImpactType, const FG01SkillLevel& InSkillLv, const FG01SpellLevel& InSpellLv, int32& ReLv) {
}

void UG01DamageFuncLib::GetDamageParamByWeaponCategory(FName InWeaponCategory, EG01BattleArtsRefLevel& ReRefLv, EG01BattleArtsRefStatus& ReRefStatus, EG01BattleArtsImpactType& ReImpactType) {
}

void UG01DamageFuncLib::GetAttrDefenceByType(const FG01CharaDefence& InDefence, const FG01CharaResistance& InResistance, EG01BattleArtsAttribute InAttr, int32& ReDefence) {
}

void UG01DamageFuncLib::GetAttrDefenceByFlags(const FG01CharaDefence& InDefence, const FG01CharaResistance& InResistance, bool InUseNewAttr, bool InCut, bool InBlow, bool InThrust, bool InHeat, bool InCold, bool InThunder, bool InLight, bool InDark, bool InSword, bool InGreatSword, bool InShortSword, bool InSpear, bool InAxe, bool InClub, bool InBow, bool InMartial, bool InPyrology, bool InHydrology, bool InTerrology, bool InAerology, bool InCosmology, bool InUmbrology, int32& ReDefence) {
}

void UG01DamageFuncLib::GetAttrDefenceByArts(const FG01CharaDefence& InDefence, const FG01CharaResistance& InResistance, const FG01BattleArtsTableRow& InArts, bool InUseNewAttr, int32& ReDefence) {
}

void UG01DamageFuncLib::ExtractAffinityOpenFlag(int32 InBitFlags, TArray<bool>& ReFlagList) {
}

void UG01DamageFuncLib::ConvertAttrFlagsToAttrEnum(const FG01BattleArtsAttrFlags& InFlag, TArray<EG01BattleArtsAttribute>& OutList) {
}

void UG01DamageFuncLib::CompressAffinityOpenFlag(const TArray<bool>& InFlagList, int32& ReBitFlags) {
}

void UG01DamageFuncLib::CalcPhysicBasePowerForParty(int32 InWeaponAttack, FName InWeaponCategory, const FG01CharaStatus& InPartyStatus, const FG01SkillLevel& InPartySkill, const FG01SpellLevel& InPartySpell, int32& RePower) {
}

void UG01DamageFuncLib::CalcPhysicBasePower(int32 InWeaponAttack, int32 InSourceLv, int32 InSourceStatus, int32 InTargetDef, int32 InImpactValue, int32& RePower) {
}

void UG01DamageFuncLib::CalcImpactValueList(TArray<EG01BattleArtsImpactType> InImpactType, const FG01SkillLevel& InSkillLv, const FG01SpellLevel& InSpellLv, int32& ReValue) {
}

void UG01DamageFuncLib::CalcImpactValue(EG01BattleArtsImpactType InImpactType, const FG01SkillLevel& InSkillLv, const FG01SpellLevel& InSpellLv, int32& ReValue) {
}


