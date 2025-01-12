#include "EventObjectFlowBase.h"

AEventObjectFlowBase::AEventObjectFlowBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MAsyncEventRequestCount = 0;
    this->MUnitCreateRequestCoutnter = 0;
}

void AEventObjectFlowBase::WaitStackCmdEventEnd(const UObject* InWorldContext, FLatentActionInfo InLatentInfo) {
}

void AEventObjectFlowBase::ReceiveStackEventFinish(const FEventResult& InEndResult) {
}

bool AEventObjectFlowBase::IsStackEventEnd(int32 InEvetKey) const {
    return false;
}

bool AEventObjectFlowBase::IsAllStackEventEnd() const {
    return false;
}

void AEventObjectFlowBase::Cmd_FA_WaitScreenHide(const UObject* InWorldContext, FLatentActionInfo InLatentInfo) {
}

void AEventObjectFlowBase::Cmd_FA_QuestSectionTransition(TSoftClassPtr<AQuestObjectBase> InQuestClass, FQuestSectionNameView InDestSection, const FQuestSkipOptions& InOptions) {
}

AQuestObjectBase* AEventObjectFlowBase::Cmd_FA_QuestOrder(TSoftClassPtr<AQuestObjectBase> InQuestClass) {
    return NULL;
}

void AEventObjectFlowBase::Cmd_FA_GetSequenceResult(int32 InEventKey, FSequencerPlayEventResult& OutResult) {
}

void AEventObjectFlowBase::Cmd_FA_EventOrderWithArgs(TSoftClassPtr<AEventObjectBase> InEventClass, const TMap<FName, FString>& InArgs) {
}

void AEventObjectFlowBase::Cmd_FA_EventOrder(TSoftClassPtr<AEventObjectBase> InEventClass) {
}


void AEventObjectFlowBase::Cmd_CU_PlaySequencer(int32& OutEventKey, FSequencerPlayEventParam InParam) {
}


