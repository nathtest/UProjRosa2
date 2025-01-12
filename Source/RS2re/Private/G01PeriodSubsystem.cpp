#include "G01PeriodSubsystem.h"

UG01PeriodSubsystem::UG01PeriodSubsystem() {
    this->IsEnablePeriodJump = true;
}

void UG01PeriodSubsystem::SetTotalJumpPoint(const int32& InPoint) {
}

void UG01PeriodSubsystem::SetRankPoint(const int32& InPoint) {
}

void UG01PeriodSubsystem::SetEnablePeriodJump(bool InEnable) {
}

void UG01PeriodSubsystem::SetCurrentJumpPoint(const int32& InPoint) {
}

int32 UG01PeriodSubsystem::GetTotalJumpPoint() const {
    return 0;
}

int32 UG01PeriodSubsystem::GetRankPoint() {
    return 0;
}

int32 UG01PeriodSubsystem::GetPreJumpPoint() const {
    return 0;
}

FG01PeriodSaveInfo UG01PeriodSubsystem::GetPeriodSaveData() const {
    return FG01PeriodSaveInfo{};
}

TArray<FG01EventTriggerID> UG01PeriodSubsystem::GetEventTriggerIdList() {
    return TArray<FG01EventTriggerID>();
}

int32 UG01PeriodSubsystem::GetCurrentJumpPoint() const {
    return 0;
}

void UG01PeriodSubsystem::CheckEnablePeriodJump(bool& OutIsEnable) const {
}

void UG01PeriodSubsystem::AddEventTriggerId(FG01EventTriggerID InID) {
}


