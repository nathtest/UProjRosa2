#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01BattleManagerHandle.generated.h"

class UG01BattleCharacterHandle;

UCLASS(Blueprintable)
class RS2RE_API UG01BattleManagerHandle : public UObject {
    GENERATED_BODY()
public:
    UG01BattleManagerHandle();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BT_TurnNo(int32& OutTurnNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BT_PartyCount(int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BT_EnemyCount(int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BT_EmperorCharacter(UG01BattleCharacterHandle*& OutCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BT_AlivePartyCount(int32& OutCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_BT_AliveEnemyCount(int32& OutCount);
    
};

