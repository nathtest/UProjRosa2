#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleArtsAttribute.h"
#include "G01BattleCharacterSkillUnitStruct.h"
#include "G01BattleCharacterSpellUnitStruct.h"
#include "G01DebugBattleLogObserverInf.generated.h"

class AActor;
class AAppActor;
class UG01BattleEnemyThinkTargetSelect;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DebugBattleLogObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01DebugBattleLogObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendShieldActivateLottery(int32 InPercent, int32 InLottery, bool InIsActivate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendShieldActivateInt(FName InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendShieldActivateFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendMapAspectLottery(int32 InPercent, int32 InLottery, bool InIsChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendMapAspectInt(FName InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendMapAspectFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendInspirationFathom(FName InFathomId, float InRate, float InLottery, bool InIsLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendInspirationCounter(FName InArtsID, float InRate, float InLottery, bool InIsLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendInspirationArts(FName InArtsID, float InRate, float InLottery, bool InIsLearn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendHitFormulaLottery(int32 InPercent, int32 InLottery, bool InIsHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendHitFormulaInt(FName InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendHitFormulaFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendEnemyCommandLotteryTargetPriority(FName InPriorityId, UG01BattleEnemyThinkTargetSelect* InTargetSelect, const TArray<AAppActor*>& InTargetList, int32 InDecideIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendEnemyCommandLotteryTargetDefault(const TArray<AAppActor*>& InTargetList, const TArray<int32>& InWeightList, int32 InDecideIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendEnemyCommandLotteryTargetAlly(const TArray<AAppActor*>& InTargetList, int32 InDecideIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendEnemyCommandLotteryArts(FName InPatternId, FName InTableId, const TArray<FName>& InArtsIdList, const TArray<int32>& InWeightList, int32 InDecideIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendDamageFormulaInt(FName InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendDamageFormulaFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendDamageFormulaAttr(FName InName, EG01BattleArtsAttribute InAttr);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendAutoCommandLotteryType(const TArray<FName>& InTypeList, const TArray<int32>& InWeightList, int32 InDecideIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendAutoCommandLotteryArts(const TArray<FG01BattleCharacterSkillUnitStruct>& InNormalSkillList, const TArray<FG01BattleCharacterSkillUnitStruct>& InOtherSkillList, const TArray<FG01BattleCharacterSpellUnitStruct>& InSpellList, const TArray<FName>& InItemList, const TArray<int32>& InWeightList, const TArray<float>& InWeightRateList, int32 InDecideIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendAilmentHitLottery(int32 InPercent, int32 InLottery, bool InIsHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendAilmentHitInt(FName InName, int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_SendAilmentHitFloat(FName InName, float InValue, int32 InFracMin, int32 InFracMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_EndShieldActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_EndMapAspectAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_EndInspiration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_EndHitFormula();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_EndEnemyCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_EndDamageFormula();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_EndAutoCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_EndAilmentHit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_BeginShieldActivate(AActor* InCharacter, FName InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_BeginMapAspectAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_BeginInspiration(FName InTag, FName InBaseArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_BeginHitFormula();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_BeginEnemyCommand(AActor* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_BeginDamageFormula();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_BeginAutoCommand(AActor* InCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01DebugBattleLog_BeginAilmentHit();
    
};

