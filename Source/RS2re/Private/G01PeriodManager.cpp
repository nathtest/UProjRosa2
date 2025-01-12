#include "G01PeriodManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
#include "G01GamePlayDataManagerAccessor.h"

AG01PeriodManager::AG01PeriodManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_PERIOD;
    this->GamePlayDataManagerAccessor = CreateDefaultSubobject<UG01GamePlayDataManagerAccessor>(TEXT("GamePlayDataManagerAccessor"));
    this->PrevGenerationCount = 0;
    this->ElapsedPeriodInfoTable = NULL;
    this->EventTriggerTable = NULL;
    this->MaxJumpPoint = 0;
}

void AG01PeriodManager::SubYearsCount(int32 InSubAgeNum) {
}

void AG01PeriodManager::SetYearsCount(int32 InAgeCount) {
}

void AG01PeriodManager::SetTotalJumpPoint(int32 InPoint) {
}

void AG01PeriodManager::SetRankPoint(const int32 InPoint) {
}

void AG01PeriodManager::SetEnablePeriodJump(bool InEnable) {
}

void AG01PeriodManager::SetCurrentJumpPoint(int32 InPoint) {
}

void AG01PeriodManager::ResetJumpPoint() {
}

void AG01PeriodManager::PeriodJump_Implementation(bool& OutIsJumped) {
}

int32 AG01PeriodManager::GetYearsCount() const {
    return 0;
}

int32 AG01PeriodManager::GetPreYearsCount() const {
    return 0;
}

void AG01PeriodManager::GetGenerationCount_Implementation(int32& OutGenerationCount) const {
}

void AG01PeriodManager::GetEventTriggerIdList(TArray<FG01EventTriggerID>& OutIdList) {
}

int32 AG01PeriodManager::GetElapsedYears(int32 InBattleCount) const {
    return 0;
}

void AG01PeriodManager::ForcePeriodJump_Implementation() {
}

void AG01PeriodManager::Debug_ResetTotalJumpPoint() {
}

void AG01PeriodManager::ConvertYearsToGeneration_Implementation(int32 InYearsCouunt, int32& OutGenerationCount) const {
}

void AG01PeriodManager::ConvertGenerationToYears_Implementation(int32 InGenerationCount, int32& OutYearsCount) const {
}

void AG01PeriodManager::CheckEnablePeriodJump(bool& OutIsEnable) const {
}

void AG01PeriodManager::AddYearsCount(int32 InAddAgeNum) {
}

void AG01PeriodManager::AddEventTriggerId(FG01EventTriggerID InID) {
}


