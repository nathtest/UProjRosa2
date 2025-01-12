#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01BattleArtsType.h"
#include "G01PartyLearnArtsStruct.h"
#include "G01LearnArtsManagerAccessor.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01LearnArtsManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01LearnArtsManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryCountAchievement(FName InArtsID, bool InCallNotify);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRegisteredArts(const FG01PartyLearnArtsStruct& InRemoveArts);
    
    UFUNCTION(BlueprintCallable)
    void IsRegisterArts(const FG01PartyLearnArtsStruct& InArts, bool& ReIsRegist);
    
    UFUNCTION(BlueprintCallable)
    void GetRegisterSpellByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReSpellList);
    
    UFUNCTION(BlueprintCallable)
    void GetRegisterSpell(TArray<FG01PartyLearnArtsStruct>& ReSpellList);
    
    UFUNCTION(BlueprintCallable)
    void GetRegisterSkillByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReSkillList);
    
    UFUNCTION(BlueprintCallable)
    void GetRegisterSkill(TArray<FG01PartyLearnArtsStruct>& ReSkillList);
    
    UFUNCTION(BlueprintCallable)
    void GetRegisterFathomByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReFathomList);
    
    UFUNCTION(BlueprintCallable)
    void GetRegisterFathom(TArray<FG01PartyLearnArtsStruct>& ReFathomList);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnSpellList(TArray<FG01PartyLearnArtsStruct>& ReSpellList);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnSpellByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReArtsList);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnSkillList(TArray<FG01PartyLearnArtsStruct>& ReSkillList);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnSkillByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReArtsList);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnFathomList(TArray<FG01PartyLearnArtsStruct>& ReFathomList);
    
    UFUNCTION(BlueprintCallable)
    void GetLearnFathomByArtsType(const EG01BattleArtsType InArtsType, TArray<FG01PartyLearnArtsStruct>& ReArtsList);
    
    UFUNCTION(BlueprintCallable)
    bool AddRegisterSpell(const FG01PartyLearnArtsStruct& InRegisterSpell);
    
    UFUNCTION(BlueprintCallable)
    bool AddRegisterSkill(const FG01PartyLearnArtsStruct& InRegisterSkill);
    
    UFUNCTION(BlueprintCallable)
    bool AddRegisterArts(const FG01PartyLearnArtsStruct& InRegisterArts);
    
    UFUNCTION(BlueprintCallable)
    void AddLearnSpell(const FG01PartyLearnArtsStruct& InLearnSpell);
    
    UFUNCTION(BlueprintCallable)
    void AddLearnSkill(const FG01PartyLearnArtsStruct& InLearnSkill);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContext"))
    void AddLearnFathom(UObject* InWorldContext, const FG01PartyLearnArtsStruct& InLearnFathom);
    
};

