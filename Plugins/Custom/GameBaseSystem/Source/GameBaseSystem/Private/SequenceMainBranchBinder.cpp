#include "SequenceMainBranchBinder.h"
#include "SequenceMainBranchController.h"

ASequenceMainBranchBinder::ASequenceMainBranchBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MSupportControllerClass = ASequenceMainBranchController::StaticClass();
    this->MainBranchController = NULL;
}

void ASequenceMainBranchBinder::Cmd_TR_NextTrackByQuestProgress(FSeqMainBranch_QuestSectionParam InParam) {
}

void ASequenceMainBranchBinder::Cmd_TR_NextTrackByFlag(FSeqMainBranch_FlagBranchParam InParam) {
}

void ASequenceMainBranchBinder::Cmd_TR_NextTrackByChoice(FSeqMainBranch_ChoiceBranchParam InParam) {
}

void ASequenceMainBranchBinder::Cmd_TR_NextTrack(FSeqMainBranch_NextTrackIndexParam InParam) {
}


