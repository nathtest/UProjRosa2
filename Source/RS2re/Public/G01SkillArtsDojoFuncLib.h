#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01BattleArtsTableRow.h"
#include "G01CharacterID.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01SkillLevel.h"
#include "G01SpellLevel.h"
#include "G01SkillArtsDojoFuncLib.generated.h"

class UG01BattleArtsManagerAccessor;
class UG01LearnArtsManagerAccessor;
class UG01PartyManagerAccessor;

UCLASS(Blueprintable)
class RS2RE_API UG01SkillArtsDojoFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01SkillArtsDojoFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SortLearnArtsByBP(UPARAM(Ref) TArray<FG01PartyLearnArtsStruct>& InLearnArtsList, UPARAM(Ref) TArray<FG01BattleArtsTableRow>& InLearnArtsDataList);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateAutoLearnArtsList(UG01BattleArtsManagerAccessor* InBattleArtsMgrAcc, UG01PartyManagerAccessor* InPartyMgrAcc, UG01LearnArtsManagerAccessor* InLearnArtsMgrAcc, const FG01SkillLevel& InSkillLevel, const FG01SpellLevel& InSpellLevel, const FG01CharacterID& InCharaID, const int32& InThresHoldCount, const int32& InSlotCount, UPARAM(Ref) TArray<FG01PartyLearnArtsStruct>& InLearnArtsList, UPARAM(Ref) TArray<FG01BattleArtsTableRow>& InLearnArtsDataList, TArray<FG01PartyLearnArtsStruct>& ReLearnArtsList, TArray<FG01BattleArtsTableRow>& ReLearnArtsDataList);
    
};

