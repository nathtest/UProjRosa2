#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "G01AttackResultInfo.h"
#include "G01BattleArtsTableRow.h"
#include "G01ArtsBehaviourBase.generated.h"

class AActor;
class UG01ArtsScriptBase;
class UG01BattleTask;

UCLASS(Blueprintable)
class RS2RE_API UG01ArtsBehaviourBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01ArtsScriptBase* ArtsScript;
    
public:
    UG01ArtsBehaviourBase();

    UFUNCTION(BlueprintCallable)
    void SetupType(const FName& InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBehaviour();
    
    UFUNCTION(BlueprintCallable)
    void SetProcessToFaintOrDeath(bool In);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOwnerCharacter(AActor* InOwnerActor);
    
    UFUNCTION(BlueprintCallable)
    void SetBehaviourName(FName In);
    
    UFUNCTION(BlueprintCallable)
    void SetArtsTableData(const FG01BattleArtsTableRow& InArts);
    
    UFUNCTION(BlueprintCallable)
    void SetArtsScript(UG01ArtsScriptBase* InArtsScript);
    
    UFUNCTION(BlueprintCallable)
    void SetArtsParameter(FName InArtsParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrepareDamageArts(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01AttackResultInfo& InResult, bool& ReBehaved);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitArts(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01AttackResultInfo& InResult, bool& ReBehaved);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideDamagePrevious(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01AttackResultInfo& InResult, bool& ReBehaved);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamagedArts(AActor* InSource, AActor* InTarget, UPARAM(Ref) FG01AttackResultInfo& InResult, bool& ReBehaved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UG01BattleTask* GetTask();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSetupType();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetObserverObject(UClass* InInterfaceType, TArray<UObject*>& OutObjectArray);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBehaviourName(FName& Out) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArtsTableData(FG01BattleArtsTableRow& ReArts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArtsScript(UG01ArtsScriptBase*& OutArtsScript);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetArtsParameter(FName& ReArtsParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DiscardBehaviour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSubTarget(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckProcessToTarget(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckMiss(AActor* InSource, AActor* InTarget, bool& OutMiss);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMainTarget(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckForceHit(AActor* InSource, AActor* InTarget, bool& OutForceHit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CheckAliveTarget(AActor* InActor, bool& OutPreviousAlive, bool& OutAlive);
    
};

