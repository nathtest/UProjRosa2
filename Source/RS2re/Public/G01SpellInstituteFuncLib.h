#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01BattleArtsType.h"
#include "G01BattleArtsTableRow.h"
#include "G01MenuPartyLearnArtsListStruct.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01SpellInstituteFuncLib.generated.h"

class UG01BattleArtsManagerAccessor;
class UG01LearnArtsManagerAccessor;
class UG01PartyManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API UG01SpellInstituteFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01SpellInstituteFuncLib();

    UFUNCTION(BlueprintCallable)
    static void GenerateAutoLearnSpellList(UG01BattleArtsManagerAccessor* InBattleArtsMgrAcc, UG01PartyManagerAccessor* InPartyMgrAcc, UG01LearnArtsManagerAccessor* InLearnArtsMgrAcc, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, UPARAM(Ref) TArray<FG01PartyLearnArtsStruct>& InLearnedSpellList, UPARAM(Ref) TArray<FG01BattleArtsTableRow>& InLearnSpellDataList, const TMap<EG01BattleArtsType, FG01MenuPartyLearnArtsListStruct>& InLearnableSpellList, const float InMaxLevelRate, TArray<FG01PartyLearnArtsStruct>& ReLearnArtsList, TArray<FG01BattleArtsTableRow>& ReLearnArtsDataList);
    
};

