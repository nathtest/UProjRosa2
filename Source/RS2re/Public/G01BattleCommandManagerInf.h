#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BattleArtsTargetSelection.h"
#include "EG01BattleCommandOperate.h"
#include "G01BattleCommandTarget.h"
#include "G01BattleCommandUnit.h"
#include "G01BattleLinkCommandStruct.h"
#include "G01BattleCommandManagerInf.generated.h"

class AActor;
class UG01BattleTask;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleCommandManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleCommandManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_WakeupMemento();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_UpdateNextSpeedForActionCountID(AActor* InSourceActor, int32 InActionSpeed, bool InFastTrick, bool InDelayAction, int32 InActionCountID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_UpdateNextSpeed(AActor* InSourceActor, int32 InActionSpeed, bool InFastTrick, bool InDelayAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_Unregister(AActor* InSourceActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_TargetSelectForLink(const FG01BattleLinkCommandStruct& InLinkCommand, EG01BattleCommandOperate InOperate, FG01BattleCommandTarget& OutTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_TargetSelect(AActor* InSource, FName InArtsName, EG01BattleCommandOperate InOperate, FG01BattleCommandTarget& ReTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_StoreMemento(AActor* InActor, const FName& InArtsID, int32 InSubIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_SimulateNextCommandList(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, TArray<FG01BattleCommandUnit>& ReList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_SimulateCommandList(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, TArray<FG01BattleCommandUnit>& ReList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_SetNextFluctureSpeedMap(const TMap<AActor*, int32>& InMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_SetNextCommandList(const TArray<FG01BattleCommandUnit>& InList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_SetFluctureSpeedMap(const TMap<AActor*, int32>& InMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_SetCommandList(const TArray<FG01BattleCommandUnit>& InList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_RestoreMemento(AActor* InActor, int32 InReverse, FName& OutArtsID, int32& OutSubIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_ResolveMemento(AActor* InActor, const TArray<FName>& InArtsIdList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_RegisterNext(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_RegisterLink(const FG01BattleLinkCommandStruct& InCommand, AActor* InTarget, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_RegisterHostile(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_RegisterCautionNext(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_RegisterCaution(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_Register(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_ReflectMemento();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_PrepareExecuteTask(UG01BattleTask* InTask, bool& ReCanExecute);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OverrideDetails(int32 InUniqueID, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, const TArray<AActor*>& InSubTargetList, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_Override(int32 InUniqueID, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnStartedCommandSelect(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnStartedCommandPlayback(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnRequestedNonActiveForNextTurn(AActor* InSourceActor, bool InNonActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnRequestedNonActive(AActor* InSourceActor, bool InNonActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnFinishedCommandSelect(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnFinishedCommandPlayback(UG01BattleTask* InTask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnFinalizeBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnChangedIgnoreInNextTimeline(AActor* InSourceActor, bool InIgnore, bool InCancel);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnChangedActionSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnActionDenied(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_OnActionCancelled(AActor* InSourceActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_MakeTargetList(AActor* InSourceActor, EG01BattleArtsTargetSelection InTargetSelect, TArray<AActor*>& OutTargetList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_MakeNextCommandList(const TArray<AActor*>& InPartyList, const TArray<AActor*>& InEnemyList, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_MakeNextCommand(AActor* InCharacter, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_MakeInvolveTargetList(FName InArtsID, AActor* InSourceActor, AActor* InTargetActor, TArray<AActor*>& OutTargetList, bool& OutAllTarget, bool& OutRandomTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_MakeCurrentCommandList(const TArray<AActor*>& InPartyList, const TArray<AActor*>& InEnemyList, bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_IsReadyToLinkCommand(bool& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_InsertFront(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool InFastTrick, bool InHideTimeLine, bool& ReSuccess, int32& ReUniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_InsertBehind(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool InDelayAction, bool InHideTimeLine, bool InNextTurn, bool& ReSuccess, int32& ReUniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_Insert(int32 InUniqueID, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool InHideTimeLine, bool& ReSuccess, int32& ReUniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_IncrementReferenceCommand(bool& OutSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_GetNextFluctureSpeedMap(TMap<AActor*, int32>& OutMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_GetNextCommandList(TArray<FG01BattleCommandUnit>& ReList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_GetFluctureSpeedMap(TMap<AActor*, int32>& OutMap);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_GetDefenseCommandId(FName& Re);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_GetCurrentCommand(FG01BattleCommandUnit& OutCommand, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_GetCommandList(TArray<FG01BattleCommandUnit>& ReList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_GetCommandablePartyCharacter(TArray<AActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_GetBaseSpeed(AActor* InSourceActor, int32& ReBaseSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_GatherLinkedSourceList(AActor* InSourceActor, TArray<AActor*>& ReSourceList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_FindNextCommandByTask(UG01BattleTask* InTask, bool& OutFound, FG01BattleCommandUnit& OutCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_FindNextCommandByTarget(AActor* InTargetActor, bool& OutFound, TArray<FG01BattleCommandUnit>& OutCommandList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_FindNextCommandBySource(AActor* InSourceActor, bool& OutFound, TArray<FG01BattleCommandUnit>& OutCommandList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_FindCommandByTask(UG01BattleTask* InTask, bool& ReFound, FG01BattleCommandUnit& ReCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_FindCommandByTarget(AActor* InTargetActor, bool& ReFound, TArray<FG01BattleCommandUnit>& ReCommandList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_FindCommandBySource(AActor* InSourceActor, bool& ReFound, TArray<FG01BattleCommandUnit>& ReCommandList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_FilterCommandableCharacter(const TArray<AActor*>& InCharacterList, TArray<AActor*>& ReCharacterList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_DiscardMemento(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_DecideToTaskForLink(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_DecideToTaskByCount(int32 InCount, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_DecideToTask(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_DBG_GetNextCommandListText(TArray<FText>& ReTextList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_DBG_GetCurrentCommandListText(TArray<FText>& ReTextList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_CopyNextToCurrent(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_ClearAllNext(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_ClearAll(bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_CheckRegisteredArts(AActor* InSourceActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_CheckRegistered(AActor* InSourceActor, int32 InActionCountID, bool& ReSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01BattleCommandManager_CheckLastPrimordialCommand(const FG01BattleCommandUnit& InCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_CheckCommandableCharacter(AActor* InCharacter, bool& ReIsCommandable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_CancelActionForNextTurn(AActor* InSourceActor, int32 InActionCountID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_CancelActionForCurrentTurn(AActor* InSourceActor, int32 InActionCountID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandManager_AssociationCommandUnitAndCommandTask(int32 InCommandListIndex, UG01BattleTask* InCommandTask);
    
};

