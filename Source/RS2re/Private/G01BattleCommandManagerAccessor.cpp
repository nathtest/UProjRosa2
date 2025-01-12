#include "G01BattleCommandManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01BattleCommandManagerAccessor::UG01BattleCommandManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_BATTLECMD;
}

void UG01BattleCommandManagerAccessor::WakeupMemento() {
}

void UG01BattleCommandManagerAccessor::UpdateNextSpeed(AActor* InSourceActor, int32 InActionSpeed, bool InFastTrick, bool InDelayAction) {
}

void UG01BattleCommandManagerAccessor::Unregister(AActor* InSourceActor, int32 InActionCountID, bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::TargetSelectForLink(const FG01BattleLinkCommandStruct& InLinkCommand, EG01BattleCommandOperate InOperate, FG01BattleCommandTarget& OutTarget) {
}

void UG01BattleCommandManagerAccessor::TargetSelect(AActor* InSource, FName InArtsName, EG01BattleCommandOperate InOperate, FG01BattleCommandTarget& ReTarget) {
}

void UG01BattleCommandManagerAccessor::StoreMemento(AActor* InActor, const FName& InArtsID, int32 InSubIndex) {
}

void UG01BattleCommandManagerAccessor::SimulateNextCommandList(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, TArray<FG01BattleCommandUnit>& ReList) {
}

void UG01BattleCommandManagerAccessor::SimulateCommandList(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, TArray<FG01BattleCommandUnit>& ReList) {
}

void UG01BattleCommandManagerAccessor::SetNextFluctureSpeedMap(const TMap<AActor*, int32>& InMap) {
}

void UG01BattleCommandManagerAccessor::SetNextCommandList(const TArray<FG01BattleCommandUnit>& InList) {
}

void UG01BattleCommandManagerAccessor::SetFluctureSpeedMap(const TMap<AActor*, int32>& InMap) {
}

void UG01BattleCommandManagerAccessor::SetCommandList(const TArray<FG01BattleCommandUnit>& InList) {
}

void UG01BattleCommandManagerAccessor::RestoreMemento(AActor* InActor, int32 InReverse, FName& OutArtsID, int32& OutSubIndex) {
}

void UG01BattleCommandManagerAccessor::ResolveMemento(AActor* InActor, const TArray<FName>& InArtsIdList) {
}

void UG01BattleCommandManagerAccessor::RegisterNext(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& OutSuccess) {
}

void UG01BattleCommandManagerAccessor::RegisterLink(const FG01BattleLinkCommandStruct& InCommand, AActor* InTarget, bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::RegisterHostile(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::Register(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, int32 InActionCountID, bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::ReflectMemento() {
}

void UG01BattleCommandManagerAccessor::PrepareExecuteTask(UG01BattleTask* InTask, bool& ReCanExecute) {
}

void UG01BattleCommandManagerAccessor::OverrideDetails(int32 InUniqueID, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, const TArray<AActor*>& InSubTargetList, bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::Override(int32 InUniqueID, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::OnStartedCommandSelect(UG01BattleTask* InTask) {
}

void UG01BattleCommandManagerAccessor::OnStartedCommandPlayback(UG01BattleTask* InTask) {
}

void UG01BattleCommandManagerAccessor::OnFinishedCommandSelect(UG01BattleTask* InTask) {
}

void UG01BattleCommandManagerAccessor::OnFinishedCommandPlayback(UG01BattleTask* InTask) {
}

void UG01BattleCommandManagerAccessor::OnFinalizeBattle() {
}

void UG01BattleCommandManagerAccessor::OnChangedIgnoreInNextTimeline(AActor* InSourceActor, bool InIgnore, bool InCancel) {
}

void UG01BattleCommandManagerAccessor::OnChangedActionSpeed() {
}

void UG01BattleCommandManagerAccessor::OnActionDenied(AActor* InSourceActor) {
}

void UG01BattleCommandManagerAccessor::OnActionCancelled(AActor* InSourceActor) {
}

void UG01BattleCommandManagerAccessor::MakeTargetList(AActor* InSourceActor, EG01BattleArtsTargetSelection InTargetSelect, TArray<AActor*>& OutTargetList) {
}

void UG01BattleCommandManagerAccessor::MakeNextCommandList(const TArray<AActor*>& InPartyList, const TArray<AActor*>& InEnemyList, bool& OutSuccess) {
}

void UG01BattleCommandManagerAccessor::MakeNextCommand(AActor* InCharacter, bool& OutSuccess) {
}

void UG01BattleCommandManagerAccessor::MakeInvolveTargetList(FName InArtsID, AActor* InSourceActor, AActor* InTargetActor, TArray<AActor*>& OutTargetList, bool& OutAllTarget, bool& OutRandomTarget) {
}

void UG01BattleCommandManagerAccessor::MakeCurrentCommandList(const TArray<AActor*>& InPartyList, const TArray<AActor*>& InEnemyList, bool& OutSuccess) {
}

void UG01BattleCommandManagerAccessor::IsReadyToLinkCommand(bool& Re) {
}

void UG01BattleCommandManagerAccessor::InsertFront(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool InFastTrick, bool InHideTimeLine, bool& ReSuccess, int32& ReUniqueID) {
}

void UG01BattleCommandManagerAccessor::InsertBehind(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool InDelayAction, bool InHideTimeLine, bool InNextTurn, bool& ReSuccess, int32& ReUniqueID) {
}

void UG01BattleCommandManagerAccessor::Insert(int32 InUniqueID, FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, bool InHideTimeLine, bool& ReSuccess, int32& ReUniqueID) {
}

void UG01BattleCommandManagerAccessor::IncrementReferenceCommand(bool& OutSuccess) {
}

void UG01BattleCommandManagerAccessor::GetNextFluctureSpeedMap(TMap<AActor*, int32>& OutMap) {
}

void UG01BattleCommandManagerAccessor::GetNextCommandList(TArray<FG01BattleCommandUnit>& ReList) {
}

void UG01BattleCommandManagerAccessor::GetFluctureSpeedMap(TMap<AActor*, int32>& OutMap) {
}

void UG01BattleCommandManagerAccessor::GetDefenseCommandId(FName& Re) {
}

void UG01BattleCommandManagerAccessor::GetCurrentCommand(FG01BattleCommandUnit& OutCommand, int32& OutIndex) {
}

void UG01BattleCommandManagerAccessor::GetCommandList(TArray<FG01BattleCommandUnit>& ReList) {
}

void UG01BattleCommandManagerAccessor::GetCommandablePartyCharacter(TArray<AActor*>& ReCharacterList) {
}

void UG01BattleCommandManagerAccessor::GetBaseSpeed(AActor* InSourceActor, int32& ReBaseSpeed) {
}

void UG01BattleCommandManagerAccessor::GatherLinkedSourceList(AActor* InSourceActor, TArray<AActor*>& ReSourceList) {
}

void UG01BattleCommandManagerAccessor::FindNextCommandByTask(UG01BattleTask* InTask, bool& OutFound, FG01BattleCommandUnit& OutCommand) {
}

void UG01BattleCommandManagerAccessor::FindNextCommandByTarget(AActor* InTargetActor, bool& OutFound, TArray<FG01BattleCommandUnit>& OutCommandList) {
}

void UG01BattleCommandManagerAccessor::FindNextCommandBySource(AActor* InSourceActor, bool& OutFound, TArray<FG01BattleCommandUnit>& OutCommandList) {
}

void UG01BattleCommandManagerAccessor::FindCommandByTask(UG01BattleTask* InTask, bool& ReFound, FG01BattleCommandUnit& ReCommand) {
}

void UG01BattleCommandManagerAccessor::FindCommandByTarget(AActor* InTargetActor, bool& ReFound, TArray<FG01BattleCommandUnit>& ReCommandList) {
}

void UG01BattleCommandManagerAccessor::FindCommandBySource(AActor* InSourceActor, bool& ReFound, TArray<FG01BattleCommandUnit>& ReCommandList) {
}

void UG01BattleCommandManagerAccessor::FilterCommandableCharacter(const TArray<AActor*>& InCharacterList, TArray<AActor*>& ReCharacterList) {
}

void UG01BattleCommandManagerAccessor::DiscardMemento(AActor* InActor) {
}

void UG01BattleCommandManagerAccessor::DecideToTaskForLink(bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::DecideToTaskByCount(int32 InCount, bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::DecideToTask(bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::CopyNextToCurrent(bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::ClearAllNext(bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::ClearAll(bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::CheckRegisteredArts(AActor* InSourceActor, int32 InActionCountID, bool& ReSuccess) {
}

void UG01BattleCommandManagerAccessor::CheckRegistered(AActor* InSourceActor, int32 InActionCountID, bool& ReSuccess) {
}

bool UG01BattleCommandManagerAccessor::CheckLastPrimordialCommand(const FG01BattleCommandUnit& InCommand) {
    return false;
}

void UG01BattleCommandManagerAccessor::CheckCommandableCharacter(AActor* InCharacter, bool& ReIsCommandable) {
}

void UG01BattleCommandManagerAccessor::CancelActionForNextTurn(AActor* InSourceActor, int32 InActionCountID) {
}

void UG01BattleCommandManagerAccessor::CancelActionForCurrentTurn(AActor* InSourceActor, int32 InActionCountID) {
}

void UG01BattleCommandManagerAccessor::AssociationCommandUnitAndCommandTask(int32 InCommandListIndex, UG01BattleTask* InCommandTask) {
}


