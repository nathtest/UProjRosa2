#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01AddedPotentEnhanceTypeEnum.h"
#include "EG01BattleArtsType.h"
#include "EG01MenuCommaEnum.h"
#include "G01BattleArtsTableRow.h"
#include "G01CharaResistance.h"
#include "G01CharacterID.h"
#include "G01ItemArmorDataStruct.h"
#include "G01ItemShieldDataStruct.h"
#include "G01MenuSortDataStruct.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01ShopSellDataStruct.h"
#include "G01SkillLevel.h"
#include "G01MenuFuncLib.generated.h"

class UG01AbilityManagerAccessor;
class UG01BattleArtsManagerAccessor;
class UG01PartyManagerAccessor;
class UObject;
class UTextSystemManagerAccessComponent;

UCLASS(Blueprintable)
class RS2RE_API UG01MenuFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01MenuFuncLib();

    UFUNCTION(BlueprintCallable)
    static void UpdateIndexByInput(int32 InCalculation, int32 InCurrentIndex, int32 InMin, int32 InMax, bool InIsPressing, int32& ReIndex, bool& ReChanged, bool& ReIsTurn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    static void SortArtsList(UObject* InWorldContext, const TArray<FG01PartyLearnArtsStruct>& InArtsList, const TArray<FG01BattleArtsTableRow>& InArtsDataList, TArray<FG01PartyLearnArtsStruct>& ReArtsList, TArray<FG01BattleArtsTableRow>& ReArtsDataList);
    
    UFUNCTION(BlueprintCallable)
    static void MenuSort(TArray<FG01ShopSellDataStruct> InList, bool IsASC, TArray<FG01ShopSellDataStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    static void MenuMapSort(TArray<FG01MenuSortDataStruct> InList, bool IsASC, TArray<FG01MenuSortDataStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    static void MenuArraySort(TArray<int32> InList, bool IsASC, TArray<int32>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsInRange(int32 InLength, int32 InIndex, bool& ReIsInRange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetShieldResistance(const FG01ItemShieldDataStruct& InShieldData, TMap<EG01AddedPotentEnhanceTypeEnum, int32>& ReResistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetPriorityWeaponList(const FG01SkillLevel& InSkillLevel, TMap<EG01BattleArtsType, int32>& ReSkillLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetClassifyResistance(const FG01CharaResistance& InResistance, TMap<EG01AddedPotentEnhanceTypeEnum, int32>& ReResistance);
    
    UFUNCTION(BlueprintCallable)
    static void GetCharacterLearnedArtsTypes(UG01PartyManagerAccessor* InPartyManager, UG01BattleArtsManagerAccessor* InArtsManager, FG01CharacterID InCharacterId, TArray<EG01BattleArtsType>& OutTypes);
    
    UFUNCTION(BlueprintCallable)
    static void GetArtsIconInfoFromArtsData(FG01BattleArtsTableRow InArtsData, EG01BattleArtsType& OutPrimaryIconType, EG01BattleArtsType& OutSecondaryIconType);
    
    UFUNCTION(BlueprintCallable)
    static void GetArtsIconInfo(UG01BattleArtsManagerAccessor* InArtsManager, FName InBattleArtsId, EG01BattleArtsType& OutPrimaryIconType, EG01BattleArtsType& OutSecondaryIconType, bool& OutIsFathom);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetArmorResistance(const FG01ItemArmorDataStruct& InArmorData, TMap<EG01AddedPotentEnhanceTypeEnum, int32>& ReResistance);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllCharacterClasses(UG01PartyManagerAccessor* InPartyManager, UG01AbilityManagerAccessor* InAbilityManager, TArray<FG01CharacterID>& OutCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToText(UTextSystemManagerAccessComponent* InTextSystemManagerAccessor, const FName& InTextID, FText& ReText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToCommaText(const FText& InText, const EG01MenuCommaEnum& InCommaType, FText& ReText);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertAbilityExplanationText(const FString& InExplanationText, TArray<int32> InEffectList, TArray<int32> InConditionList, TArray<int32> InRateList, TArray<int32>& OutParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void AutoWeaponPrioritySort(TMap<EG01BattleArtsType, int32> InSkillLevel, TMap<EG01BattleArtsType, int32>& ReSkillLevel);
    
};

