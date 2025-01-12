#include "G01PeriodManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01PeriodManagerAccessor::UG01PeriodManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_PERIOD;
}

void UG01PeriodManagerAccessor::SubYearsCount(int32 InSubAgeNum) {
}

void UG01PeriodManagerAccessor::SubCurrentJumpPoint(const FG01EventTriggerID& InEventTriggerID) {
}

void UG01PeriodManagerAccessor::SetYearsCount(int32 InAgeCount) {
}

void UG01PeriodManagerAccessor::SetRankPoint(const int32 InPoint) {
}

void UG01PeriodManagerAccessor::SetEnablePeriodJump(bool InEnable) {
}

void UG01PeriodManagerAccessor::PeriodJump(bool& OutIsJumped) {
}

int32 UG01PeriodManagerAccessor::GetYearsCount() const {
    return 0;
}

int32 UG01PeriodManagerAccessor::GetTotalJumpPoint() const {
    return 0;
}

int32 UG01PeriodManagerAccessor::GetRankPoint() const {
    return 0;
}

int32 UG01PeriodManagerAccessor::GetPreYearsCount() const {
    return 0;
}

int32 UG01PeriodManagerAccessor::GetPreJumpPoint() const {
    return 0;
}

void UG01PeriodManagerAccessor::GetGenerationCount(int32& OutGenerationCount) const {
}

void UG01PeriodManagerAccessor::GetEventTriggerIdList(TArray<FG01EventTriggerID>& OutIdList) {
}

int32 UG01PeriodManagerAccessor::GetElapsedYears(int32 InBattleCount) const {
    return 0;
}

int32 UG01PeriodManagerAccessor::GetCurrentJumpPoint() const {
    return 0;
}

void UG01PeriodManagerAccessor::ForcePeriodJump() {
}

void UG01PeriodManagerAccessor::Debug_ResetTotalJumpPoint() const {
}

void UG01PeriodManagerAccessor::Debug_ResetRankPoint() {
}

void UG01PeriodManagerAccessor::Debug_ResetJumpPoint() const {
}

void UG01PeriodManagerAccessor::ConvertYearsToGeneration(int32 InYearsCount, int32& OutGenerationCount) const {
}

void UG01PeriodManagerAccessor::ConvertGenerationToYears(int32 InGenerationCount, int32& OutYearsCount) const {
}

void UG01PeriodManagerAccessor::CheckEnablePeriodJump(bool& OutIsEnable) const {
}

void UG01PeriodManagerAccessor::AddYearsCount(int32 InAddAgeNum) {
}

void UG01PeriodManagerAccessor::AddJumpPointAndPeriodJumpList(const TArray<FG01EventTriggerID>& InEventTriggerIdList, bool& OutIsJumped) {
}

void UG01PeriodManagerAccessor::AddJumpPointAndPeriodJump(const FG01EventTriggerID& InEventTriggerID, bool& OutIsJumped) {
}

void UG01PeriodManagerAccessor::AddEventPointAndPeriodJump(const FG01EventPointIDStruct& InEventPointID, const bool InAgeJump, bool& OutIsJumped) {
}

void UG01PeriodManagerAccessor::AddCurrentJumpPoint(const FG01EventTriggerID& InEventTriggerID) {
}


