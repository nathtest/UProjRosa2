#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01BattleArtsTargetSelection.h"
#include "EG01BattleCommandOperate.h"
#include "G01BattleCommandTarget.h"
#include "G01BattleCommandUnit.h"
#include "G01BattleLinkCommandStruct.h"
#include "G01BattleCommandManagerAccessor.generated.h"

class AActor;
class UG01BattleTask;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleCommandManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01BattleCommandManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WakeupMemento();
    
    UFUNCTION(BlueprintCallable)
    void UpdateNextSpeed(AActor* InSourceActor, int32 InActionSpeed, bool InFastTrick, bool InDelayAction);
    
    UFUNCTION(BlueprintCallable)
    void Unregister(AActor* InSourceActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void TargetSelectForLink(const FG01BattleLinkCommandStruct& InLinkCommand, EG01BattleCommandOperate InOperate, FG01BattleCommandTarget& OutTarget);
    
    UFUNCTION(BlueprintCallable)
    void TargetSelect(AActor* InSource, FName InArtsName, EG01BattleCommandOperate InOperate, FG01BattleCommandTarget& ReTarget);
    
    UFUNCTION(BlueprintCallable)
    void StoreMemento(AActor* InActor, const FName& InArtsID, int32 InSubIndex);
    
    UFUNCTION(BlueprintCallable)
    void SimulateNextCommandList(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, TArray<FG01BattleCommandUnit>& ReList);
    
    UFUNCTION(BlueprintCallable)
    void SimulateCommandList(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, TArray<FG01BattleCommandUnit>& ReList);
    
    UFUNCTION(BlueprintCallable)
    void SetNextFluctureSpeedMap(const TMap<AActor*, int32>& InMap);
    
    UFUNCTION(BlueprintCallable)
    void SetNextCommandList(const TArray<FG01BattleCommandUnit>& InList);
    
    UFUNCTION(BlueprintCallable)
    void SetFluctureSpeedMap(const TMap<AActor*, int32>& InMap);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandList(const TArray<FG01BattleCommandUnit>& InList);
    
    UFUNCTION(BlueprintCallable)
    void RestoreMemento(AActor* InActor, int32 InReverse, FName& OutArtsID, int32& OutSubIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResolveMemento(AActor* InActor, const TArray<FName>& InArtsIdList);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNext(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLink(const FG01BattleLinkCommandStruct& InCommand, AActor* InTarget, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHostile(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Register(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void ReflectMemento();
    
    UFUNCTION(BlueprintCallable)
    void PrepareExecuteTask(UG01BattleTask* InTask, bool& ReCanExecute);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDetails(int32 InUniqueID, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, const TArray<AActor*>& InSubTargetList, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Override(int32 InUniqueID, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnStartedCommandSelect(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void OnStartedCommandPlayback(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedCommandSelect(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedCommandPlayback(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable)
    void OnFinalizeBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedIgnoreInNextTimeline(AActor* InSourceActor, bool InIgnore, bool InCancel);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedActionSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnActionDenied(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActionCancelled(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable)
    void MakeTargetList(AActor* InSourceActor, EG01BattleArtsTargetSelection InTargetSelect, TArray<AActor*>& OutTargetList);
    
    UFUNCTION(BlueprintCallable)
    void MakeNextCommandList(const TArray<AActor*>& InPartyList, const TArray<AActor*>& InEnemyList, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void MakeNextCommand(AActor* InCharacter, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void MakeInvolveTargetList(FName InArtsID, AActor* InSourceActor, AActor* InTargetActor, TArray<AActor*>& OutTargetList, bool& OutAllTarget, bool& OutRandomTarget);
    
    UFUNCTION(BlueprintCallable)
    void MakeCurrentCommandList(const TArray<AActor*>& InPartyList, const TArray<AActor*>& InEnemyList, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsReadyToLinkCommand(bool& Re);
    
    UFUNCTION(BlueprintCallable)
    void InsertFront(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool InFastTrick, bool InHideTimeLine, bool& ReSuccess, int32& ReUniqueID);
    
    UFUNCTION(BlueprintCallable)
    void InsertBehind(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool InDelayAction, bool InHideTimeLine, bool InNextTurn, bool& ReSuccess, int32& ReUniqueID);
    
    UFUNCTION(BlueprintCallable)
    void Insert(int32 InUniqueID, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool InHideTimeLine, bool& ReSuccess, int32& ReUniqueID);
    
    UFUNCTION(BlueprintCallable)
    void IncrementReferenceCommand(bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void GetNextFluctureSpeedMap(TMap<AActor*, int32>& OutMap);
    
    UFUNCTION(BlueprintCallable)
    void GetNextCommandList(TArray<FG01BattleCommandUnit>& ReList);
    
    UFUNCTION(BlueprintCallable)
    void GetFluctureSpeedMap(TMap<AActor*, int32>& OutMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDefenseCommandId(FName& Re);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentCommand(FG01BattleCommandUnit& OutCommand, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetCommandList(TArray<FG01BattleCommandUnit>& ReList);
    
    UFUNCTION(BlueprintCallable)
    void GetCommandablePartyCharacter(TArray<AActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void GetBaseSpeed(AActor* InSourceActor, int32& ReBaseSpeed);
    
    UFUNCTION(BlueprintCallable)
    void GatherLinkedSourceList(AActor* InSourceActor, TArray<AActor*>& ReSourceList);
    
    UFUNCTION(BlueprintCallable)
    void FindNextCommandByTask(UG01BattleTask* InTask, bool& OutFound, FG01BattleCommandUnit& OutCommand);
    
    UFUNCTION(BlueprintCallable)
    void FindNextCommandByTarget(AActor* InTargetActor, bool& OutFound, TArray<FG01BattleCommandUnit>& OutCommandList);
    
    UFUNCTION(BlueprintCallable)
    void FindNextCommandBySource(AActor* InSourceActor, bool& OutFound, TArray<FG01BattleCommandUnit>& OutCommandList);
    
    UFUNCTION(BlueprintCallable)
    void FindCommandByTask(UG01BattleTask* InTask, bool& ReFound, FG01BattleCommandUnit& ReCommand);
    
    UFUNCTION(BlueprintCallable)
    void FindCommandByTarget(AActor* InTargetActor, bool& ReFound, TArray<FG01BattleCommandUnit>& ReCommandList);
    
    UFUNCTION(BlueprintCallable)
    void FindCommandBySource(AActor* InSourceActor, bool& ReFound, TArray<FG01BattleCommandUnit>& ReCommandList);
    
    UFUNCTION(BlueprintCallable)
    void FilterCommandableCharacter(const TArray<AActor*>& InCharacterList, TArray<AActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable)
    void DiscardMemento(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void DecideToTaskForLink(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void DecideToTaskByCount(int32 InCount, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void DecideToTask(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void CopyNextToCurrent(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllNext(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void ClearAll(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void CheckRegisteredArts(AActor* InSourceActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    void CheckRegistered(AActor* InSourceActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable)
    bool CheckLastPrimordialCommand(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable)
    void CheckCommandableCharacter(AActor* InCharacter, bool& ReIsCommandable);
    
    UFUNCTION(BlueprintCallable)
    void CancelActionForNextTurn(AActor* InSourceActor, int32 InActionCountID);
    
    UFUNCTION(BlueprintCallable)
    void CancelActionForCurrentTurn(AActor* InSourceActor, int32 InActionCountID);
    
    UFUNCTION(BlueprintCallable)
    void AssociationCommandUnitAndCommandTask(int32 InCommandListIndex, UG01BattleTask* InCommandTask);
    
};

