#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EG01BattleCharacterAnimReactionType.h"
#include "G01AttackInfo.h"
#include "G01AttackResultInfo.h"
#include "G01BattleArtsSequenceSetting.h"
#include "G01BattleCharacterObserverInf.generated.h"

class AActor;
class AG01SequenceControllerBase;
class ASequenceController;
class UG01ArtsScriptBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleCharacterObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleCharacterObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleManager_OnStartedArtsFathom(AActor* InActor, FName InArtsID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCharacter_OnPrepareDamageArts(AActor* InSource, AActor* InTarget, const FG01AttackInfo& InAttackInfo, const FG01AttackResultInfo& InResultInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCharacter_OnMovedFreeArea(AActor* InSource, const FTransform& InAreaTrans, bool InIsLeaved);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01BattleCharacter_OnEquippedExtraWeapon(AActor* InSource, FName InItemID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnUpdateCommandPattern(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnTriggerEventBySequencer(AActor* InActor, ASequenceController* InSequenceController, FName InTriggerKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnTakeRevive(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnStartSequence(AActor* InActor, AActor* InSource);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnStartLearnFathomSequence(AActor* InSource, AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnSetUsingArts(const FG01AttackInfo& InAttackInfo, AG01SequenceControllerBase* InArtsSequence, const FG01BattleArtsSequenceSetting& InArtsSequenceSetting, UG01ArtsScriptBase* InArtsScript);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnPlayReaction(AActor* InActor, EG01BattleCharacterAnimReactionType InEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnEndSequence(AActor* InActor, AActor* InSource);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnEndLearnFathomSequence(AActor* InSource, AActor* InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnDecidedLearnArtsFathom(AActor* InActor, FName InLearnArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnDecideArtsDeflect(AActor* InActor, AActor* InSource, FName InSourceArtsId, FName InDeflectArtsId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_OnClearUsingArts(const FG01AttackInfo& InAttackInfo, AG01SequenceControllerBase* InArtsSequence, const FG01BattleArtsSequenceSetting& InArtsSequenceSetting, UG01ArtsScriptBase* InArtsScript);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_BattleCharacter_ChangeDither(AActor* InActor, bool InDitherUsed, float InRate);
    
};

