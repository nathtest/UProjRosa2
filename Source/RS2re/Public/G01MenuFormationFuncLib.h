#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01BattleArtsRefLevel.h"
#include "EG01BattleArtsType.h"
#include "EG01MenuFormationAutoSortCategoryEnum.h"
#include "G01MenuFormationFuncLib.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01MenuFormationFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01MenuFormationFuncLib();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsSpecialWeaponCompare(EG01MenuFormationAutoSortCategoryEnum InCategory, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsSpecialSpellCompare(EG01MenuFormationAutoSortCategoryEnum InCategory, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsCompareValue(EG01MenuFormationAutoSortCategoryEnum InCategory, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsCalcMaxCompare(EG01MenuFormationAutoSortCategoryEnum InCategory, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertSpellType(EG01MenuFormationAutoSortCategoryEnum InCategory, EG01BattleArtsType& ReArtsType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertArtsRefLevel(EG01MenuFormationAutoSortCategoryEnum InCategory, EG01BattleArtsRefLevel& ReArtsRefLevel);
    
};

