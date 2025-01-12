#include "SequenceSubBranchBinder.h"
#include "SequenceSubBranchController.h"

ASequenceSubBranchBinder::ASequenceSubBranchBinder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MSupportControllerClass = ASequenceSubBranchController::StaticClass();
    this->MSubBranchController = NULL;
}

void ASequenceSubBranchBinder::Cmd_TR_FrameJumpByQuestProgress(FSeqSubBranch_FrameJumpByQuestProgress InParam) {
}

void ASequenceSubBranchBinder::Cmd_TR_FrameJumpByFlag(FSeqSubBranch_FrameJumpByFlag InParam) {
}

void ASequenceSubBranchBinder::Cmd_TR_FrameJumpByChoice(FSeqSubBranch_FrameJumpByChoice InParam) {
}

void ASequenceSubBranchBinder::Cmd_TR_FrameJump(FSeqSubBranch_JumpFrame InParam) {
}


