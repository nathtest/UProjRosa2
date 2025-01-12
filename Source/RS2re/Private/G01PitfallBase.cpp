#include "G01PitfallBase.h"

AG01PitfallBase::AG01PitfallBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AG01PitfallBase::SetCoverMesh(UObject* InCoverMesh) {
}

void AG01PitfallBase::SetAnimationFinished() {
}

bool AG01PitfallBase::ResetAnimation() {
    return false;
}

void AG01PitfallBase::OnOpenCover_Implementation() {
}

void AG01PitfallBase::GetPreCrashSound(USQEXSEADSoundBank*& OutSoundBank, FName& OutSoundName) {
}

UObject* AG01PitfallBase::GetCoverMesh() {
    return NULL;
}

void AG01PitfallBase::ForceOpen_Implementation() {
}


