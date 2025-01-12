#include "EventObjectBase.h"
#include "FlagSystemManagerAccessCompo.h"
#include "LevelObjectFinderAccessComponent.h"
#include "QuestManagerAccessComponent.h"
#include "SaveDataManagerAccessor.h"

AEventObjectBase::AEventObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MIsAllowMultiPlay = true;
    this->MIsAutoDestroyWithEventEnd = true;
    this->MQuestManagerAccessor = CreateDefaultSubobject<UQuestManagerAccessComponent>(TEXT("QuestManagerAccessor"));
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
    this->SaveDataManagerAccessor = CreateDefaultSubobject<USaveDataManagerAccessor>(TEXT("SaveDataManagerAccessor"));
    this->LevelObjectFinder = CreateDefaultSubobject<ULevelObjectFinderAccessComponent>(TEXT("LevelObjectFinder"));
    this->MIsEventCompleted = false;
    this->MIsBlockForceEndRequest = false;
    this->MEventRequester = NULL;
    this->EventFlags = EEventFlags::None;
    this->EventState = EEventState::None;
    this->MEventInterval = -1.00f;
    this->MEventEndResult = EEventEndResult::None;
    this->PlayerReactionType = EPlayerReactionType::NONE;
}

bool AEventObjectBase::IsWaitingExecute() const {
    return false;
}

bool AEventObjectBase::IsEventCompleted() const {
    return false;
}

bool AEventObjectBase::IsAutoDestroyWithEventEnd() const {
    return false;
}

bool AEventObjectBase::IsAllowMultiPlay() const {
    return false;
}

EPlayerReactionType AEventObjectBase::GetPlayerReactionType() const {
    return EPlayerReactionType::NONE;
}

FInteractColliderTag AEventObjectBase::GetInteractTag() const {
    return FInteractColliderTag{};
}

float AEventObjectBase::GetEventInterval() const {
    return 0.0f;
}

FEventCategory AEventObjectBase::GetEventCategory() const {
    return FEventCategory{};
}

void AEventObjectBase::EndWaitExecutableEvent() {
}

bool AEventObjectBase::DoWaitExecutableEvent(const FEventArguments& InArguments) {
    return false;
}




void AEventObjectBase::Cmd_EA_WaitEventEnd(const UObject* InWorldContext, FLatentActionInfo InLatentInfo) {
}

void AEventObjectBase::Cmd_EA_SetFlag(FFlagIDListViewStruct InFlagID, bool InSetValue) {
}

void AEventObjectBase::Cmd_EA_SetBlockForceEndRequest(bool InIsBlock) {
}

void AEventObjectBase::Cmd_EA_RandomInt(int32& OutValue, int32 InMin, int32 InMax) const {
}

void AEventObjectBase::Cmd_EA_PrevLevelTransition(EScreenTransitionType InFadeType, float InFadeTime) {
}

void AEventObjectBase::Cmd_EA_PlayEvent(const FEventArguments& InArguments) {
}

void AEventObjectBase::Cmd_EA_LevelTransition(FLevelTransitionInfoView InDestinationLevelInfo, EScreenTransitionType InFadeType, float InFadeTime) {
}

bool AEventObjectBase::Cmd_EA_IsEventPlaying() const {
    return false;
}

bool AEventObjectBase::Cmd_EA_IsEventForceEnd() const {
    return false;
}

bool AEventObjectBase::Cmd_EA_IsEventEnd() const {
    return false;
}

bool AEventObjectBase::Cmd_EA_IsEventCheckExecutable() const {
    return false;
}

void AEventObjectBase::Cmd_EA_InteractTagCheck(FInteractColliderTag InInteractTag, EEventInteractTagCheck& OutBranches, bool& OutIsSame) {
}

UObject* AEventObjectBase::Cmd_EA_GetRequesterMost() const {
    return NULL;
}

UObject* AEventObjectBase::Cmd_EA_GetRequester() const {
    return NULL;
}

void AEventObjectBase::Cmd_EA_FindLevelObject(bool& OutIsFound, FLevelObjectFindResult& OutResult, FEditableLevelObjectID InID) {
}

void AEventObjectBase::Cmd_EA_ExecuteAutoSave(bool& OutIsSuccess, ESaveDataSyncType InSyncType, const FSaveDataSaveOptions& InOptions) {
}

void AEventObjectBase::Cmd_EA_EnvironmentSetting(FEnvironmentInfoView InEnvironmentViewInfo) {
}

void AEventObjectBase::Cmd_EA_EndEvent(EEventEndResult InEndResult, FName InEndValue) {
}

void AEventObjectBase::Cmd_EA_ConditionCheck(EEventConditionCheck& OutBranches, bool InCondition, int32 InReactionType) {
}

bool AEventObjectBase::Cmd_EA_CheckQuestSectionRange(TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InCustomQuestID, FQuestSectionNameView InSectionRangeBeginName, EQuestSectionEvalOp InBeginEvalOp, FQuestSectionNameView InSectionRangeEndName, EQuestSectionEvalOp InEndEvalOp) {
    return false;
}

bool AEventObjectBase::Cmd_EA_CheckQuestSection(TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InCustomQuestID, FQuestSectionNameView InCheckSectionName, EQuestSectionEvalOp InEvalOp) {
    return false;
}

bool AEventObjectBase::Cmd_EA_CheckQuestEndState(TSoftClassPtr<AQuestObjectBase> InQuestClass, FName InCustomQuestID, TEnumAsByte<EQuestEndCheckType::Type> InCheckType) {
    return false;
}

bool AEventObjectBase::Cmd_EA_CheckFlag(FFlagIDListViewStruct InFlagID) {
    return false;
}

bool AEventObjectBase::Cmd_EA_CheckEventState(int32 InCheckState) {
    return false;
}

bool AEventObjectBase::CheckEventExecutable(FEventArguments InArguments) {
    return false;
}


