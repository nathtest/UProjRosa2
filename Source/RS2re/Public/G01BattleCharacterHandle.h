#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01BattleCharacterHandle.generated.h"

class UG01BattleCharacterHandle;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleCharacterHandle : public UObject {
    GENERATED_BODY()
public:
    UG01BattleCharacterHandle();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BC_SelfTurnCount(int32& OutTurnCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BC_MaxLP(int32& OutMaxLP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BC_MaxHP(int32& OutMaxHP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BC_LP(int32& OutLP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BC_LastTurnArtsList(TArray<FName>& OutArtsList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BC_IsParty(bool& OutIsParty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BC_IsEnemy(bool& OutIsEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BC_IsEmperor(bool& OutIsEmperor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BC_HP(int32& OutHP);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BC_FormationLineNo(int32& OutLineNo);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_BC_CheckArtsInvolve(FName InArtsID, UG01BattleCharacterHandle* InMainTarget, TArray<UG01BattleCharacterHandle*>& OutTargetList);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_BC_CalcTargetWeight(int32& OutTargetWeight);
    
};

