#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01AbilityCharaStatusEffect.h"
#include "G01BattleEnemyCommandTableRow.h"
#include "G01BattleEnemyCommandThinkStruct.h"
#include "G01BattleEnemyInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleEnemyInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleEnemyInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_UpdateCommandPattern(bool& ReChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_SetupCommandPattern(const TArray<FG01BattleEnemyCommandTableRow>& InPatternList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_SetStatusAbility(const FG01AbilityCharaStatusEffect& In);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_SetNextCommandPatternIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_SetNextCommandPatternId(FName InPatternId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_SetEnhanceRowName(FName InRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_SetEnemyForceLevel(int32 InForceLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_SetDropItemUseFlag(int32 InSlotNo, bool InUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_SetCommandPatternIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_SetCommandPatternId(FName InPatternId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_GetStatusAbility(FG01AbilityCharaStatusEffect& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_GetOriginalID(FName& OutId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_GetNextCommandPattern(FG01BattleEnemyCommandTableRow& RePattern);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_GetEnhanceRowName(FName& OutRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_GetEnemyForceLevel(int32& OutForceLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_GetDropItemUseFlag(int32 InSlotNo, bool& OutUse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_GetDisarmWeapon(FName& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_GetCurrentCommandThink(FG01BattleEnemyCommandThinkStruct& OutThink);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_GetCurrentCommandPattern(FG01BattleEnemyCommandTableRow& RePattern);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_GetAllCommandPattern(TArray<FG01BattleEnemyCommandTableRow>& OutPatternList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_FinalizeCommandThink();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleEnemy_ClearDropItemUseFlag();
    
};

