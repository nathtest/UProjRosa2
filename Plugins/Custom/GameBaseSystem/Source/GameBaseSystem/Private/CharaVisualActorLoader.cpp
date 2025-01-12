#include "CharaVisualActorLoader.h"

ACharaVisualActorLoader::ACharaVisualActorLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MIsSetAnimInstance = false;
    this->MAnimInstance = NULL;
    this->MAnimMontage = NULL;
}

void ACharaVisualActorLoader::SetAnimSequence(FName InKey, UAnimSequence* InAnimSequence) {
}

void ACharaVisualActorLoader::SetAnimMontage(UAnimMontage* InAnimMontage) {
}

void ACharaVisualActorLoader::PlayMontage(FName InSlot, float InBlendInTime, float InBlendOutTime, float InPlayRate, int32 InLoopCount) {
}

void ACharaVisualActorLoader::PlayAnimSequenceSlot(FName InKey, FName InSlot, float InBlendInTime, float InBlendOutTime, float InPlayRate, int32 InLoopCount) {
}

void ACharaVisualActorLoader::PlayAnimSequence(FName InKey, bool InIsLoop) {
}

bool ACharaVisualActorLoader::LoadAnimSequence(TSoftClassPtr<UObject> InLoadClass, FName InKey) {
    return false;
}

bool ACharaVisualActorLoader::LoadAnimMontage(TSoftClassPtr<UObject> InLoadClass) {
    return false;
}

bool ACharaVisualActorLoader::LoadAnimInstance(TSoftClassPtr<UObject> InLoadClass, bool InIsSetAnimInstance) {
    return false;
}

UAnimSequence* ACharaVisualActorLoader::GetAnimSequence(FName InKey) {
    return NULL;
}

UAnimMontage* ACharaVisualActorLoader::GetAnimMontage() {
    return NULL;
}


