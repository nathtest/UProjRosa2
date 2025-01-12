#include "QuestManagerAccessComponent.h"
#include "EManagerID.h"

UQuestManagerAccessComponent::UQuestManagerAccessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_QUEST;
}

void UQuestManagerAccessComponent::QuestOrderWithRebuildByQuestID(bool& OutIsSuccess, FName InQuestID, FQuestSectionNameView InTargetSectionName, const FQuestSkipOptions& InOptions, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex) {
}

void UQuestManagerAccessComponent::QuestOrderWithRebuildByFName(bool& OutIsSuccess, TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InTargetSectionName, const FQuestSkipOptions& InOptions, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex) {
}

void UQuestManagerAccessComponent::QuestOrderWithRebuild(bool& OutIsSuccess, TSoftClassPtr<AQuestObjectBase> InQuestClass, FQuestSectionNameView InTargetSectionName, const FQuestSkipOptions& InOptions, int32 InQuestPrerequisiteIndex, int32 InFlagPrerequisiteIndex) {
}

AQuestObjectBase* UQuestManagerAccessComponent::QuestOrderByQuestID(FName InOriginalQuestID, FName InCustomQuestID) {
    return NULL;
}

AQuestObjectBase* UQuestManagerAccessComponent::QuestOrderByFullQuestID(FName InQuestID) {
    return NULL;
}

AQuestObjectBase* UQuestManagerAccessComponent::QuestOrderByClass(TSoftClassPtr<AQuestObjectBase> InOrderQuestClass, FName InCustomQuestID) {
    return NULL;
}

void UQuestManagerAccessComponent::IsTargetQuestByClass(TSoftClassPtr<AQuestObjectCore> InQuestClass, bool& ReIsTarget) const {
}

void UQuestManagerAccessComponent::IsTargetQuest(FName InQuestID, bool& ReIsTarget) const {
}

bool UQuestManagerAccessComponent::IsQuestRebuilding() const {
    return false;
}

bool UQuestManagerAccessComponent::IsDuringRestoration() const {
    return false;
}

FName UQuestManagerAccessComponent::GetQuestSectionName(TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID) {
    return NAME_None;
}

AQuestManager* UQuestManagerAccessComponent::GetQuestManager() {
    return NULL;
}

void UQuestManagerAccessComponent::GetQuestListByCategory(int32 InOrderState, FQuestCategory InCategory, TArray<AQuestObjectBase*>& OutQuestList) {
}

void UQuestManagerAccessComponent::GetQuestListAll(int32 InOrderState, TArray<AQuestObjectBase*>& OutQuestList) {
}

UDataTable* UQuestManagerAccessComponent::GetQuestAllParamTable() const {
    return NULL;
}

TArray<AQuestObjectBase*> UQuestManagerAccessComponent::GetOrderedQuestList() {
    return TArray<AQuestObjectBase*>();
}

void UQuestManagerAccessComponent::GetLastTargetQuestCoreData(UQuestCoreData*& OutCoreData) {
}

void UQuestManagerAccessComponent::FindQuestObjectByQuestID(FName InOriginalID, FName InCustomID, AQuestObjectCore*& OutQuest) {
}

void UQuestManagerAccessComponent::FindQuestObjectByFullID(FName InQuestID, AQuestObjectCore*& OutQuest) {
}

UQuestCoreData* UQuestManagerAccessComponent::FindQuestCoreDataByClass(TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InCustomQuestID) const {
    return NULL;
}

UQuestCoreData* UQuestManagerAccessComponent::FindQuestCoreData(FName InQuestID) const {
    return NULL;
}

void UQuestManagerAccessComponent::FindAllQuestObjectByOriginalID(FName InOriginalID, TArray<AQuestObjectCore*>& OutQuests) {
}

TMap<FQuestCategory, FQuestCoreDataArray> UQuestManagerAccessComponent::FindAllQuestCoreDataOfOrdered() const {
    return TMap<FQuestCategory, FQuestCoreDataArray>();
}

TMap<FQuestCategory, FQuestCoreDataArray> UQuestManagerAccessComponent::FindAllQuestCoreDataOfFailed() const {
    return TMap<FQuestCategory, FQuestCoreDataArray>();
}

TMap<FQuestCategory, FQuestCoreDataArray> UQuestManagerAccessComponent::FindAllQuestCoreDataOfClear() const {
    return TMap<FQuestCategory, FQuestCoreDataArray>();
}

void UQuestManagerAccessComponent::FindAllQuestCoreDataHasAnyOrderState(int32 InOrderState, FQuestCoreDataArray& ReQuestCoreDataArray) const {
}

TMap<FQuestCategory, FQuestCoreDataArray> UQuestManagerAccessComponent::FindAllQuestCoreData(int32 InOrderState) const {
    return TMap<FQuestCategory, FQuestCoreDataArray>();
}

bool UQuestManagerAccessComponent::EvaluateQuestSectionRange(TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID, FQuestSectionNameView InBeginSectionName, EQuestSectionEvalOp InBeginEvalOp, FQuestSectionNameView InEndSectionName, EQuestSectionEvalOp InEndEvalOp) {
    return false;
}

bool UQuestManagerAccessComponent::EvaluateQuestSection(TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID, FQuestSectionNameView InQuestSectionName, EQuestSectionEvalOp InEvalOp) {
    return false;
}

bool UQuestManagerAccessComponent::CheckQuestEndState(TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID, TEnumAsByte<EQuestEndCheckType::Type> InCheckType) {
    return false;
}


