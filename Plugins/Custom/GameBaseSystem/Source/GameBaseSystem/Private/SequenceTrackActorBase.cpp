#include "SequenceTrackActorBase.h"

ASequenceTrackActorBase::ASequenceTrackActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MSequencePlayer = NULL;
    this->MIsEndTriggerActor = false;
    this->MEndDelayTime = 0.00f;
    this->MIsActiveTrackActor = true;
}







void ASequenceTrackActorBase::OnGeneralTriggerEvent(const FSeqGeneralEventParam& InParam) {
}


void ASequenceTrackActorBase::OnEndGeneralRepeaterEvent(const FSeqGeneralEventParam& InParam) {
}

void ASequenceTrackActorBase::OnDestroyTrackActor_Implementation(bool InIsEditor) {
}




bool ASequenceTrackActorBase::OnBeginGeneralRepeaterEvent(const FSeqGeneralEventParam& InParam) {
    return false;
}




bool ASequenceTrackActorBase::IsEndTriggerActor() const {
    return false;
}

USequenceResources* ASequenceTrackActorBase::GetSequenceResource() const {
    return NULL;
}

UCustomLevelSequencePlayer* ASequenceTrackActorBase::GetSequencePlayer() const {
    return NULL;
}

ASequenceController* ASequenceTrackActorBase::GetSequenceController() const {
    return NULL;
}

float ASequenceTrackActorBase::GetEndDelayTime() const {
    return 0.0f;
}

AActor* ASequenceTrackActorBase::FindBindingActor(const FMovieSceneObjectBindingID& InBindingID) const {
    return NULL;
}

void ASequenceTrackActorBase::Cmd_TR_GeneralTriggerEvent(FSeqGeneralEventParam InParam) {
}

FSeqPlayArguments ASequenceTrackActorBase::Cmd_SQ_GetPlayArguments() const {
    return FSeqPlayArguments{};
}

bool ASequenceTrackActorBase::Cmd_SA_IsPlaying() const {
    return false;
}

void ASequenceTrackActorBase::Cmd_SA_FindGeneralRepeaterEventRange(FName InEventKey, bool& ReIsFound, TArray<FFrameNumberRange>& ReFoundRangeList) {
}

void ASequenceTrackActorBase::Cmd_RP_GeneralRepeaterEvent(FSeqGeneralEventParam InParam) {
}


