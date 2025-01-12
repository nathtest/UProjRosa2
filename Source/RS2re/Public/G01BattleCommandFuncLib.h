#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "G01BattleCharacterDefenseArtsUnitStruct.h"
#include "G01BattleCharacterItemArtsUnitStruct.h"
#include "G01BattleCommandUnit.h"
#include "G01BattleCommandFuncLib.generated.h"

class AActor;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleCommandFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UG01BattleCommandFuncLib();

    UFUNCTION(BlueprintCallable)
    static void LotteryByWeight(const TArray<int32>& InWeightList, bool& OutSuccess, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IsCommandMoveRelated(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReEqual);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void EqualsCommandTarget(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReEqual);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void EqualsCommandSource(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReEqual);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void EqualsCommandAction(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReEqual);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void EqualsCommand(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReEqual);
    
    UFUNCTION(BlueprintCallable)
    static void CreateItemArtsUnitList(AActor* InActor, const TArray<FName>& InList, TArray<FG01BattleCharacterItemArtsUnitStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    static void CreateDefenseArtsUnitList(AActor* InActor, const TArray<FName>& InList, TArray<FG01BattleCharacterDefenseArtsUnitStruct>& OutList);
    
    UFUNCTION(BlueprintCallable)
    static void CommandIndexOf(const TArray<FG01BattleCommandUnit>& InList, const FG01BattleCommandUnit& InUnit, bool& ReFound, int32& ReIndex);
    
    UFUNCTION(BlueprintCallable)
    static void CalcRateByWeight(const TArray<int32>& InWeightList, int32 InElemNo, float& OutRate);
    
    UFUNCTION(BlueprintCallable)
    static void CalcPercentByWeight(const TArray<int32>& InWeightList, int32 InElemNo, int32& OutPercent);
    
};

