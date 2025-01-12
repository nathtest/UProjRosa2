#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleArtsType.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01LearnArtsManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LearnArtsManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LearnArtsManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LearnArtsManager_UpdateRegisterLearnArts();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LearnArtsManager_TryCountAchievement(FName InArtsID, bool InCallNotify);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LearnArtsManager_RemoveRegisteredArts(const FG01PartyLearnArtsStruct& InRemoveArts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LearnArtsManager_GetRegisterSpellByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReRegisterArtsList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LearnArtsManager_GetRegisterSkillByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReRegisterArtsList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LearnArtsManager_GetRegisterFathomByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReRegisterArtsList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01LearnArtsManager_AddRegisterSpell(const FG01PartyLearnArtsStruct& InRegisterSpell);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01LearnArtsManager_AddRegisterSkill(const FG01PartyLearnArtsStruct& InRegisterSkill);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LearnArtsManager_AddLearnArts(const FG01PartyLearnArtsStruct& InLearnArts);
    
};

