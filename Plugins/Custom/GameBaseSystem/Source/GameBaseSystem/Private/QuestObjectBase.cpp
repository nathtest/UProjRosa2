#include "QuestObjectBase.h"
#include "EventManagerAccessComponent.h"
#include "FlagEventReceiveComponent.h"
#include "FlagSystemManagerAccessCompo.h"

AQuestObjectBase::AQuestObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MEventManagerAccessor = CreateDefaultSubobject<UEventManagerAccessComponent>(TEXT("EventManagerAccessor"));
    this->MFlagEventReceiver = CreateDefaultSubobject<UFlagEventReceiveComponent>(TEXT("FlagEventReceiver"));
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagSystemAccessor"));
}

void AQuestObjectBase::Cmd_ST_SetFlag(FFlagIDListViewStruct InFlagID, bool InSetValue) {
}

void AQuestObjectBase::Cmd_ST_RemoveSectionLogToParent(FQuestSectionNameView InSection) {
}

void AQuestObjectBase::Cmd_ST_QuestOrderByQuestID(FName InOriginalQuestID, FName InCustomQuestID, bool InIsWaitQuestEnd) {
}

void AQuestObjectBase::Cmd_ST_QuestOrderByFullQuestID(FName InQuestID, bool InIsWaitQuestEnd) {
}

void AQuestObjectBase::Cmd_ST_QuestOrder(TSoftClassPtr<AQuestObjectBase> InOrderQuestClass, bool InIsWaitQuestEnd) {
}

void AQuestObjectBase::Cmd_ST_LevelTransition(FLevelTransitionInfoView InDestinationLevelInfo) {
}

void AQuestObjectBase::Cmd_ST_EventOrderWithArgs(TSoftClassPtr<AEventObjectBase> InOrderEventClass, const TMap<FName, FString>& InArgs, bool InIsSectionWaitEventEnd, FEventEndParams InEndParams) {
}

void AQuestObjectBase::Cmd_ST_EventOrder(TSoftClassPtr<AEventObjectBase> InOrderEventClass, bool InIsSectionWaitEventEnd, FEventEndParams InEndParams) {
}

void AQuestObjectBase::Cmd_ST_AddSectionLogToParent(FQuestSectionNameView InSection) {
}

void AQuestObjectBase::Cmd_ST_AddEventAtLevelTransition(FLevelTransitionInfoView InLevelInfo, TSoftClassPtr<AEventObjectBase> InEventClass) {
}

void AQuestObjectBase::Cmd_QA_SetFlag(FFlagIDListViewStruct InFlagID, bool InSetValue) {
}

void AQuestObjectBase::Cmd_QA_QuestOrder(TSoftClassPtr<AQuestObjectBase> InOrderQuestClass) {
}

void AQuestObjectBase::Cmd_QA_LevelTransition(FLevelTransitionInfoView InDestinationLevelInfo) {
}

bool AQuestObjectBase::Cmd_QA_GetFlag(FFlagIDListViewStruct InFlagID) {
    return false;
}

void AQuestObjectBase::Cmd_QA_EventOrderWithArgs(TSoftClassPtr<AEventObjectBase> InOrderEventClass, const TMap<FName, FString>& InArgs, bool InIsSectionWaitEventEnd, FEventEndParams InEndParams) {
}

void AQuestObjectBase::Cmd_QA_EventOrder(TSoftClassPtr<AEventObjectBase> InOrderEventClass, bool InIsSectionWaitEventEnd, FEventEndParams InEndParams) {
}

void AQuestObjectBase::Cmd_QA_ChangePlayer(FEditableLevelObjectID InCharaLevelObjectID) {
}

void AQuestObjectBase::Cmd_QA_AddEventAtLevelTransition(FLevelTransitionInfoView InLevelInfo, TSoftClassPtr<AEventObjectBase> InEventClass) {
}



void AQuestObjectBase::Cmd_CA_TrialCheck(bool InIsTrialROM) {
}

void AQuestObjectBase::Cmd_CA_SequencerFinishedForMultiChoice(TSoftObjectPtr<ULevelSequence> InTargetSequence, const TArray<int32>& InChoiceIndexResults) {
}

void AQuestObjectBase::Cmd_CA_SequencerFinished(TSoftObjectPtr<ULevelSequence> InTargetSequencer, int32 InChoiceIndex) {
}

void AQuestObjectBase::Cmd_CA_QuestProgress(TSoftClassPtr<AQuestObjectBase> InQuestClass, FQuestSectionNameView InSection) {
}

void AQuestObjectBase::Cmd_CA_QuestEndByClass(TSoftClassPtr<AQuestObjectBase> InQuestClass, TEnumAsByte<EQuestEndCheckType::Type> InCheckType) {
}

void AQuestObjectBase::Cmd_CA_LevelTransitionOut(FLevelTransitionInfoView InTargetLevelInfo, FLevelTransitionParamRoom InTargetRoom, bool InIsMoment, bool InIsCheckPrevLevel) {
}

void AQuestObjectBase::Cmd_CA_LevelTransition(FLevelTransitionInfoView InTargetLevelInfo, FLevelTransitionParamRoom InTargetRoom) {
}

void AQuestObjectBase::Cmd_CA_FlagChanged(FFlagIDListViewStruct InFlagID, bool InChangedValue) {
}

void AQuestObjectBase::Cmd_CA_EventEndByClass(TSoftClassPtr<AEventObjectBase> InEventClass, EEventEndResult InEndResult, FName InEndValue) {
}


