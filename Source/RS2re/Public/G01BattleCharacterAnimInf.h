#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SeqNotifyBattleDamageParam.h"
#include "G01BattleCharacterAnimInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleCharacterAnimInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleCharacterAnimInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacterAnim_ArtsHit(const TArray<int32>& InTargetNo, int32 InHitNo, const FG01SeqNotifyBattleDamageParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacterAnim_ArtsFathom(const TArray<int32>& InTargetNo, int32 InHitNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCharacterAnim_ActionCommand(FName InActionCommand);
    
};

