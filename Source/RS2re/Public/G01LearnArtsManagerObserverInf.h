#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleArtsLearnType.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01LearnArtsManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LearnArtsManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01LearnArtsManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01LearnArtsManager_OnProgressAchievementSpell(int32 InCurrent, int32 InMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01LearnArtsManager_OnProgressAchievementSkill(int32 InCurrent, int32 InMax);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01LearnArtsManager_AddRegisterArts(const FG01PartyLearnArtsStruct InLearnArts, const EG01BattleArtsLearnType InArtsType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01LearnArtsManager_AddLearnArts(const FG01PartyLearnArtsStruct InLearnArts, const EG01BattleArtsLearnType InArtsType);
    
};

