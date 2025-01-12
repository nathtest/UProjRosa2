#include "G01BattleTask.h"

UG01BattleTask::UG01BattleTask() {
    this->MTaskOrder = -1;
    this->MSourceActor = NULL;
    this->MTargetActor = NULL;
    this->EnablePoisonEndCheckTask = false;
    this->IsCompleted = false;
}

void UG01BattleTask::SetTaskOrder(int32 InTaskOrder) {
}

void UG01BattleTask::SetTaskId(FName InTaskId) {
}

void UG01BattleTask::SetPoisonEndCheckTask(bool InIsEnable) {
}

void UG01BattleTask::SetMainTarget(AActor* InMainTarget) {
}

void UG01BattleTask::SetMainSource(AActor* InMainSource) {
}

void UG01BattleTask::SetAdditionalTarget(TArray<AActor*>& InAdditionalTarget) {
}

void UG01BattleTask::SetAdditionalSource(const TArray<AActor*>& InAdditionalSource) {
}

void UG01BattleTask::OverrideAdditionalSource(const TArray<AActor*>& InAdditionalSource) {
}

void UG01BattleTask::Initialize() {
}

void UG01BattleTask::GetPoisonEndCheckTask(bool& OutIsEnable) {
}

void UG01BattleTask::Execute() {
}

void UG01BattleTask::Complete() {
}

bool UG01BattleTask::CheckCompleted() const {
    return false;
}


