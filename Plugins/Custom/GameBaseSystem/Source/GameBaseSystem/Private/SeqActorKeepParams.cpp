#include "SeqActorKeepParams.h"

FSeqActorKeepParams::FSeqActorKeepParams() {
    this->MParentActor = NULL;
    this->MAnimInstance = NULL;
    this->MAnimMode = EAnimationMode::AnimationBlueprint;
    this->MSkeletalMeshComponent = NULL;
    this->MSkeletalMesh = NULL;
    this->MAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
    this->MIsEnabledVisualActorTick = false;
    this->MIsHidden = false;
    this->RootComponentMobility = EComponentMobility::Static;
}

