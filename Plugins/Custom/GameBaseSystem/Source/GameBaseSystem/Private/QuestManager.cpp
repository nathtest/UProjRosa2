#include "QuestManager.h"
#include "CollisionObjManagerAccessCompo.h"
#include "EManagerID.h"
#include "EventManagerAccessComponent.h"
#include "FlagEventReceiveComponent.h"
#include "FlagSystemManagerAccessCompo.h"
#include "LoadScreenManagerAccessor.h"
#include "ObserverSubjectComponent.h"

AQuestManager::AQuestManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_QUEST;
    this->ObserverSubject = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubject"));
    this->MEventManagerAccessor = CreateDefaultSubobject<UEventManagerAccessComponent>(TEXT("EventManagerAccessor"));
    this->MFlagEventReceiver = CreateDefaultSubobject<UFlagEventReceiveComponent>(TEXT("FlagEventReceiver"));
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
    this->MCollisionObjectManagerAccessor = CreateDefaultSubobject<UCollisionObjManagerAccessCompo>(TEXT("CollisionObjManagerAccessor"));
    this->MLoadScreenAccessor = CreateDefaultSubobject<ULoadScreenManagerAccessor>(TEXT("LoadScreenAccessor"));
    this->MIsDelayRestoreQuest = false;
    this->bIsDuringRestoration = false;
    this->LevelLockCount = 0;
}

AQuestObjectBase* AQuestManager::QuestOrderByQuestID(FName InOriginalQuestID, FName InCustomQuestID) {
    return NULL;
}

AQuestObjectBase* AQuestManager::QuestOrderByFullQuestID(FName InQuestID) {
    return NULL;
}

AQuestObjectBase* AQuestManager::QuestOrderByClass(TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InCustomQuestID) {
    return NULL;
}

void AQuestManager::QuestDestroyedCallback(AActor* InDestroyActor) {
}

void AQuestManager::OnQuestSectionChanged_Implementation(const FQuestReceiveParamQuestSectionChanged& InParam) {
}

void AQuestManager::OnQuestOrdered_Implementation(const FQuestReceiveParamQuestOrdered& InParam) {
}

void AQuestManager::OnQuestFinish_Implementation(const FQuestReceiveParamQuestFinish& InParam) {
}

void AQuestManager::OnQuestBegin_Implementation(const FQuestReceiveParamQuestBegin& InParam) {
}

void AQuestManager::OnQuestAllSectionCompleted_Implementation(const FQuestReceiveParamQuestSectionCompleted& InParam) {
}

void AQuestManager::OnQuestActiveListAllClear_Implementation() {
}


void AQuestManager::OnPreQuestSectionChanged_Implementation(const FQuestReceiveParamQuestSectionChanged& InParam) {
}


void AQuestManager::OnPostQuestSectionChanged_Implementation(const FQuestReceiveParamQuestSectionChanged& InParam) {
}

void AQuestManager::OnAnyQuestUpdate_Implementation(const TSoftClassPtr<AQuestObjectCore>& InQuestClass) {
}

void AQuestManager::Notify_SequencerFinished_Implementation(const FSequencePlayFinishParam& InParam) {
}

void AQuestManager::Notify_QuestEndCondition_Implementation(AQuestObjectBase* InEndQuest) {
}

void AQuestManager::Notify_FlagChanged_Implementation(const FFlagChangedEventParam& InParam) {
}

void AQuestManager::Notify_EventEndCallback_Implementation(const FEventResult& InEndResult) {
}

FName AQuestManager::GetQuestSectionName(TSoftClassPtr<AQuestObjectCore> InQuestClass, FName InCustomQuestID) {
    return NAME_None;
}

void AQuestManager::GetQuestListByCategory(int32 InOrderState, FQuestCategory InCategory, TArray<AQuestObjectBase*>& OutQuestList) {
}

void AQuestManager::GetQuestListAll(int32 InOrderState, TArray<AQuestObjectBase*>& OutQuestList) {
}


