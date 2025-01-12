#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01BattleArtsAttribute.h"
#include "EG01BattleArtsImpactType.h"
#include "EG01BattleArtsRefLevel.h"
#include "EG01BattleArtsRefStatus.h"
#include "G01BattleArtsAttrFlags.h"
#include "G01BattleArtsTableRow.h"
#include "G01CharaDefence.h"
#include "G01CharaResistance.h"
#include "G01CharaStatus.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01DamageFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01DamageFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01DamageFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsNoneAttributeByFlags(bool InCut, bool InBlow, bool InThrust, bool InHeat, bool InCold, bool InThunder, bool InLight, bool InDark, bool InSword, bool InGreatSword, bool InShortSword, bool InSpear, bool InAxe, bool InClub, bool InBow, bool InMartial, bool InPyrology, bool InHydrology, bool InTerrology, bool InAerology, bool InCosmology, bool InUmbrology, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsNoneAttributeByArts(const FG01BattleArtsTableRow& InArts, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void HasAnyAffinity(const FG01BattleArtsTableRow& InArts, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRefStatusList(TArray<EG01BattleArtsRefStatus> InRefStatus, const FG01CharaStatus& InCharaStatus, int32& ReStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRefStatus(EG01BattleArtsRefStatus InRefStatus, const FG01CharaStatus& InCharaStatus, int32& ReStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRefLvList(TArray<EG01BattleArtsRefLevel> InRefLv, const FG01SkillLevel& InSkillLv, const FG01SpellLevel& InSpellLv, int32& ReLv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRefLv(EG01BattleArtsRefLevel InRefLv, const FG01SkillLevel& InSkillLv, const FG01SpellLevel& InSpellLv, int32& ReLv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetImpactValueLv(EG01BattleArtsImpactType InImpactType, const FG01SkillLevel& InSkillLv, const FG01SpellLevel& InSpellLv, int32& ReLv);
    
    UFUNCTION(BlueprintCallable)
    static void GetDamageParamByWeaponCategory(FName InWeaponCategory, EG01BattleArtsRefLevel& ReRefLv, EG01BattleArtsRefStatus& ReRefStatus, EG01BattleArtsImpactType& ReImpactType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttrDefenceByType(const FG01CharaDefence& InDefence, const FG01CharaResistance& InResistance, EG01BattleArtsAttribute InAttr, int32& ReDefence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttrDefenceByFlags(const FG01CharaDefence& InDefence, const FG01CharaResistance& InResistance, bool InUseNewAttr, bool InCut, bool InBlow, bool InThrust, bool InHeat, bool InCold, bool InThunder, bool InLight, bool InDark, bool InSword, bool InGreatSword, bool InShortSword, bool InSpear, bool InAxe, bool InClub, bool InBow, bool InMartial, bool InPyrology, bool InHydrology, bool InTerrology, bool InAerology, bool InCosmology, bool InUmbrology, int32& ReDefence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAttrDefenceByArts(const FG01CharaDefence& InDefence, const FG01CharaResistance& InResistance, const FG01BattleArtsTableRow& InArts, bool InUseNewAttr, int32& ReDefence);
    
    UFUNCTION(BlueprintCallable)
    static void ExtractAffinityOpenFlag(int32 InBitFlags, TArray<bool>& ReFlagList);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertAttrFlagsToAttrEnum(const FG01BattleArtsAttrFlags& InFlag, TArray<EG01BattleArtsAttribute>& OutList);
    
    UFUNCTION(BlueprintCallable)
    static void CompressAffinityOpenFlag(const TArray<bool>& InFlagList, int32& ReBitFlags);
    
    UFUNCTION(BlueprintCallable)
    static void CalcPhysicBasePowerForParty(int32 InWeaponAttack, FName InWeaponCategory, const FG01CharaStatus& InPartyStatus, const FG01SkillLevel& InPartySkill, const FG01SpellLevel& InPartySpell, int32& RePower);
    
    UFUNCTION(BlueprintCallable)
    static void CalcPhysicBasePower(int32 InWeaponAttack, int32 InSourceLv, int32 InSourceStatus, int32 InTargetDef, int32 InImpactValue, int32& RePower);
    
    UFUNCTION(BlueprintCallable)
    static void CalcImpactValueList(TArray<EG01BattleArtsImpactType> InImpactType, const FG01SkillLevel& InSkillLv, const FG01SpellLevel& InSpellLv, int32& ReValue);
    
    UFUNCTION(BlueprintCallable)
    static void CalcImpactValue(EG01BattleArtsImpactType InImpactType, const FG01SkillLevel& InSkillLv, const FG01SpellLevel& InSpellLv, int32& ReValue);
    
};

