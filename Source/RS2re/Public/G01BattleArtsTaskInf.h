#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ArtBehaviourTablePullDownKey.h"
#include "G01AttackInfo.h"
#include "G01BattleArtsSequenceSetting.h"
#include "G01BattleArtsTaskInf.generated.h"

class AG01SequenceControllerBase;
class UG01ArtsScriptBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleArtsTaskInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleArtsTaskInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsTask_SetUsingArts(const FG01AttackInfo& InAttackInfo, AG01SequenceControllerBase* InArtsSequence, const FG01BattleArtsSequenceSetting& InArtsSequenceSetting, UG01ArtsScriptBase* InArtsScript);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsTask_IsTargetReverse(bool& OutReverse);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsTask_HasBehaviour(FG01ArtBehaviourTablePullDownKey InKey, bool& Has);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsTask_GetSequenceSetting(FG01BattleArtsSequenceSetting& OutSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleArtsTask_ExplicitHostile(bool InHostile);
    
};

