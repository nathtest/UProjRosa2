#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleTutorialNotifyCounterArts.h"
#include "G01BattleTutorialNotifyFathom.h"
#include "G01BattleTutorialNotifySkillArts.h"
#include "G01BattleTutorialNotifySpellArts.h"
#include "G01BattleTutorialObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleTutorialObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleTutorialObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleTutorial_OnSpellInspiration(const FG01BattleTutorialNotifySpellArts& InNotify);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleTutorial_OnSkillInspiration(const FG01BattleTutorialNotifySkillArts& InNotify);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleTutorial_OnFathomInspiration(const FG01BattleTutorialNotifyFathom& InNotify);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleTutorial_OnCounterInspiration(const FG01BattleTutorialNotifyCounterArts& InNotify);
    
};

