#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01ArtBehaviourTablePullDownKey.h"
#include "G01ArtsDelayHitKey.h"
#include "G01AttackResultInfo.h"
#include "G01BehaviourHitMultiplyInfo.h"
#include "G01ArtsScriptBase.generated.h"

class AActor;
class AManagerBase;
class UG01ArtsDelayHitComponent;
class UG01BattleTask;

UCLASS(Blueprintable)
class RS2RE_API UG01ArtsScriptBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AManagerBase* ArtsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UG01ArtsDelayHitComponent* DelayHitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01BattleTask* Task;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FG01ArtsDelayHitKey, FG01BehaviourHitMultiplyInfo> DelayHitMultiplyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BehaviourHitNumberGuide_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, bool> AliveCharacterByArtsBefore;
    
public:
    UG01ArtsScriptBase();

    UFUNCTION(BlueprintCallable)
    void SetupInspirationSkill();
    
    UFUNCTION(BlueprintCallable)
    void SetupInspirationParryOrCounter();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SetTaskOwner(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void SetArtsOwner(AActor* InOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnPrepareDamageArts(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnHitArts(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnDiscard();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedCommand();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideDamagePrevious(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable)
    void OnDamagedArts(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01AttackResultInfo& InResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTaskTargetList(TArray<AActor*>& OutTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTaskSource(AActor*& OutSource);
    
    UFUNCTION(BlueprintCallable)
    void GetTaskOwner(UG01BattleTask*& OutTask);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Cmd_AS_SetBehaviourTarget(int32 InHitNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_AS_OnDecidedCommand(bool& OutUnused);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cmd_AS_GetAddedPotentHitCorrection(bool& OutUnused, FG01AddedPotentBaseKeyStruct InBaseKey, float& OutCorrection);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_AS_AddPotent(AActor* InSource, AActor* InTarget, FG01AddedPotentBaseKeyStruct InAddedPotentKey, FName InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_AS_AddPlayBackTask(FName InArtsID, AActor* InSource, AActor* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_AS_AddBehaviour(FG01ArtBehaviourTablePullDownKey InBehaviourKey, FName InParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void CheckMiss(AActor* InSource, AActor* InTarget, bool& OutMiss);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckHasBehaviour(FG01ArtBehaviourTablePullDownKey InKey);
    
    UFUNCTION(BlueprintCallable)
    void CheckForceHit(AActor* InSource, AActor* InTarget, bool& OutForceHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckAliveTarget(AActor* InActor, bool& OutPreviousAlive, bool& OutAlive);
    
};

