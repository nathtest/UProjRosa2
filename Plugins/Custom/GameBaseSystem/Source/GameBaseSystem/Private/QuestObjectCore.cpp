#include "QuestObjectCore.h"
#include "QuestManagerAccessComponent.h"
#include "QuestStackConditions.h"

AQuestObjectCore::AQuestObjectCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QuestID = TEXT("InvalidQuest");
    this->bIsIgnoreFlowPhase = false;
    this->QuestBasisParamTable = NULL;
    this->MQuestManagerAccessor = CreateDefaultSubobject<UQuestManagerAccessComponent>(TEXT("QuestManagerAccessor"));
    this->CoreData = NULL;
    this->MSectionStopConditions = CreateDefaultSubobject<UQuestStackConditions>(TEXT("SectionStopConditions"));
    this->bIsEnableFrameDistributed = true;
    this->SkipTargetFlowIndex = -1;
}

void AQuestObjectCore::ResetFlowPhase() {
}

bool AQuestObjectCore::IsSectionSkipping() const {
    return false;
}

bool AQuestObjectCore::IsSectionRewinding() const {
    return false;
}

bool AQuestObjectCore::IsSectionPreCalculation() const {
    return false;
}

bool AQuestObjectCore::IsInSectionRange(FQuestSectionNameView InBeginSectionName, FQuestSectionNameView InEndSectionName) const {
    return false;
}

bool AQuestObjectCore::IsDuringRestoration() const {
    return false;
}

void AQuestObjectCore::GetStackConditionsObject(TArray<UQuestStackConditions*>& OutStackConditionsObjects) const {
}

FName AQuestObjectCore::GetQuestName() const {
    return NAME_None;
}

FName AQuestObjectCore::GetQuestID() const {
    return NAME_None;
}

UQuestCoreData* AQuestObjectCore::GetQuestCoreData(bool& ReIsValidData) {
    return NULL;
}

FQuestIdentificationData AQuestObjectCore::GetQuestCategory(bool& ReIsValidData) const {
    return FQuestIdentificationData{};
}

FName AQuestObjectCore::GetOriginalQuestID() const {
    return NAME_None;
}

int32 AQuestObjectCore::GetNotifyCount_Implementation() const {
    return 0;
}

FName AQuestObjectCore::GetCustomQuestID() const {
    return NAME_None;
}

FQuestBasisParameter AQuestObjectCore::GetBasisParameter(bool& ReIsValidData) const {
    return FQuestBasisParameter{};
}

void AQuestObjectCore::EndStackPhase() {
}

void AQuestObjectCore::EndStackConditions() {
}

void AQuestObjectCore::Cmd_ST_SetDestinationSection(FQuestSectionNameView InDestSection, bool InIsRewind) {
}

void AQuestObjectCore::Cmd_ST_QuestEnd(TEnumAsByte<EQuestEndType::Type> InEndType) {
}

void AQuestObjectCore::Cmd_QA_StartQuest() {
}

void AQuestObjectCore::Cmd_QA_SetDestinationSection(FQuestSectionNameView InDestSection, bool InIsRewind) {
}

void AQuestObjectCore::Cmd_QA_QuestEnd(TEnumAsByte<EQuestEndType::Type> InEndType) {
}

void AQuestObjectCore::Cmd_FL_Branch(EQuestSectionFlowBranchResult& OutBranches, bool InCondition) {
}






void AQuestObjectCore::BeginStackConditions(const FQuestStackOptionCondition& InOption) {
}


