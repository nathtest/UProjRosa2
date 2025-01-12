#include "G01BattleTaskController.h"
#include "G01BattleArtsManagerAccessor.h"
#include "G01BattleCommandManagerAccessor.h"
#include "G01BattleEnemyManagerAccessor.h"
#include "G01BattleManagerAccessor.h"

AG01BattleTaskController::AG01BattleTaskController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MBattleManagerAccessor = CreateDefaultSubobject<UG01BattleManagerAccessor>(TEXT("BattleManagerAccessor"));
    this->MBattleCommandManagerAccessor = CreateDefaultSubobject<UG01BattleCommandManagerAccessor>(TEXT("BattleCommandManagerAccessor"));
    this->MBattleEnemyManagerAccessor = CreateDefaultSubobject<UG01BattleEnemyManagerAccessor>(TEXT("BattleEnemyManagerAccessor"));
    this->MBattleArtsManagerAccessor = CreateDefaultSubobject<UG01BattleArtsManagerAccessor>(TEXT("BattleArtsManagerAccessor"));
    this->BattleTaskTable = NULL;
    this->MCurrentTask = NULL;
}

void AG01BattleTaskController::TaskIndexOf(EG01BattleTaskSlot InSlot, AActor* InSourceActor, bool& ReFound, int32& ReIndex) {
}

void AG01BattleTaskController::TaskEnd() {
}

void AG01BattleTaskController::LoadRequestPlaybackResource() {
}

void AG01BattleTaskController::IsLoadedPlaybackResource(bool& ReIsLoaded) {
}

void AG01BattleTaskController::IsActiveCurrentTask(bool& ReIsActive) {
}

void AG01BattleTaskController::InsertTask(UG01BattleTask* InTask, EG01BattleTaskSlot InSlot, int32 InIndex, bool& ReSuccess) {
}

void AG01BattleTaskController::HasPlaybackTask(bool& Re) {
}

void AG01BattleTaskController::HasLinkPlayBackTask(bool& Re) {
}

void AG01BattleTaskController::HasCommandTask(bool& Re) {
}

void AG01BattleTaskController::HasAnyTask(EG01BattleTaskSlot InSlot, bool& Re) {
}

void AG01BattleTaskController::GetStackTaskNum(EG01BattleTaskSlot InSlot, int32& ReNum) {
}

void AG01BattleTaskController::GetNextTask(EG01BattleTaskSlot InSlot, UG01BattleTask*& ReTask) {
}

void AG01BattleTaskController::GetLatestTaskSource(EG01BattleTaskSlot InSlot, TArray<AActor*>& Re) {
}

void AG01BattleTaskController::GetCurrentSlot(EG01BattleTaskSlot& Re) {
}

void AG01BattleTaskController::FindTaskEffectSetting(UG01BattleTask* InTask, bool& ReFound, FG01BattleArtsEffectSetting& ReSetting) {
}

void AG01BattleTaskController::FindCurrentTaskEffectSetting(bool& ReFound, FG01BattleArtsEffectSetting& ReSetting) {
}

void AG01BattleTaskController::ExecutionNextTask(EG01BattleTaskSlot InSlot, bool& ReSuccess) {
}

void AG01BattleTaskController::CreateTaskObject(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& OutTask) {
}

void AG01BattleTaskController::CreateLoadTaskObject(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& OutTask) {
}

void AG01BattleTaskController::CreateLoadEffectTaskObject(AActor* InSourceActor, const FVFXLoadInfo& InInfo, UG01BattleTask*& OutTask) {
}

void AG01BattleTaskController::CreateArtsTaskObject(FName InTaskId, AActor* InSourceActor, AActor* InTargetActor, UG01BattleTask*& OutTask) {
}

void AG01BattleTaskController::ClearTaskList(EG01BattleTaskSlot InSlot) {
}

void AG01BattleTaskController::ClearLatestTaskSource(EG01BattleTaskSlot InSlot) {
}

void AG01BattleTaskController::CheckRelateionCurrentTask(AActor* InCharacter, bool& ReIsRelated, bool& ReIsSource, bool& ReIsTarget, int32& ReTargetIndex) {
}

void AG01BattleTaskController::CancelTaskOnSourceCharacter(AActor* InSourceActor) {
}

void AG01BattleTaskController::CancelTaskBySource(EG01BattleTaskSlot InSlot, const TArray<AActor*>& InSourceList) {
}

void AG01BattleTaskController::CancelTask(UG01BattleTask* InTask) {
}

void AG01BattleTaskController::BindTask(bool InIsBind, UG01BattleTask* InTask) {
}

void AG01BattleTaskController::AddTask(UG01BattleTask* InTask, EG01BattleTaskSlot InSlot, bool& ReSuccess) {
}


