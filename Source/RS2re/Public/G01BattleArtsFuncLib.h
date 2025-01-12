#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EG01BattleArtsTargetSelection.h"
#include "EG01BattleArtsType.h"
#include "G01BattleArtsTableRow.h"
#include "G01BattleArtsFuncLib.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleArtsFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01BattleArtsFuncLib();

    UFUNCTION(BlueprintCallable)
    static void MakeStatusSpellArtsTypeList(TArray<EG01BattleArtsType>& OutList);
    
    UFUNCTION(BlueprintCallable)
    static void MakeStatusSkillArtsTypeList(TArray<EG01BattleArtsType>& OutList);
    
    UFUNCTION(BlueprintCallable)
    static void MakeStatusArtsTypeList(TArray<EG01BattleArtsType>& OutList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsSpellArts(EG01BattleArtsType InType, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsSkillArts(EG01BattleArtsType InType, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsRecoverArts(const FG01BattleArtsTableRow& InArts, bool& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsItemArts(EG01BattleArtsType InType, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsCombineSpellArts(EG01BattleArtsType InType, bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsBasicSpellArts(EG01BattleArtsType InType, bool& Re);
    
    UFUNCTION(BlueprintCallable)
    static void GetTargetSelectForDisp(const FG01BattleArtsTableRow& InArts, EG01BattleArtsTargetSelection& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSrcSpellArtsType(EG01BattleArtsType InCombineSpellArtsType, EG01BattleArtsType& ReSrcSpellArtsType1, EG01BattleArtsType& ReSrcSpellArtsType2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetOppositeSpellArtsType(EG01BattleArtsType InSpellArtsType, EG01BattleArtsType& ReOppositeSpellArtsType);
    
    UFUNCTION(BlueprintCallable)
    static void CalcOffsetToSequencePlayTransformByActorSize(AActor* InSourceActor, TArray<AActor*> InTargetActorList, FTransform& OutOffset);
    
};

