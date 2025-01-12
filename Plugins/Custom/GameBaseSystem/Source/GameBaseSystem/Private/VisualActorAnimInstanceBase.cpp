#include "VisualActorAnimInstanceBase.h"
#include "Templates/SubclassOf.h"

UVisualActorAnimInstanceBase::UVisualActorAnimInstanceBase() {
    this->PoseCopyTarget = NULL;
    this->AnimLayerQuality = EVisualActorAnimQuality::None;
    this->MMoveMinValue = 0.12f;
}

void UVisualActorAnimInstanceBase::SetPoseCopyTarget(USkeletalMeshComponent* InTarget) {
}

void UVisualActorAnimInstanceBase::RestoreCachedDefaultSlotMontageParam(int32 InSlotIndex, float InTransientBlendInTime, float InTransientBlendOutTime, bool InIsCacheClear) {
}



void UVisualActorAnimInstanceBase::InitAnimLayers() {
}

UVisualActorParamDataAsset* UVisualActorAnimInstanceBase::GetVisualActorParam() const {
    return NULL;
}

EVisualActorAnimQuality UVisualActorAnimInstanceBase::GetVisualActorAnimQuality() const {
    return EVisualActorAnimQuality::None;
}

AActor* UVisualActorAnimInstanceBase::GetOwningVisualActor() const {
    return NULL;
}

void UVisualActorAnimInstanceBase::GetMoveControlParam(FVAParamMoveControl& ReMoveParam) const {
}

TArray<UAnimInstance*> UVisualActorAnimInstanceBase::GetAllLinkedAnimLayerInstance(TSubclassOf<UInterface> InInterfaceClass) const {
    return TArray<UAnimInstance*>();
}

void UVisualActorAnimInstanceBase::ForceUpdateAnimation(USkeletalMeshComponent* InSkeletalMeshComponent) {
}

TArray<UAnimationAsset*> UVisualActorAnimInstanceBase::FindPlayingAnimSequences(FName InSlotName) {
    return TArray<UAnimationAsset*>();
}

UAnimInstance* UVisualActorAnimInstanceBase::FindLinkedAnimLayerInstance(TSubclassOf<UAnimInstance> InClass) const {
    return NULL;
}

void UVisualActorAnimInstanceBase::ConditionalUnkinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass, bool InIsForceUnlink) {
}

void UVisualActorAnimInstanceBase::ConditionalLinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass, bool InIsForceLink) {
}

void UVisualActorAnimInstanceBase::ChangeDefaultSlot(int32 InNextSlotIndex, bool InIsCopyLastAnim, float InBlendTime) {
}

void UVisualActorAnimInstanceBase::ChangeAnimLayerQuality(EVisualActorAnimQuality InQuality) {
}

bool UVisualActorAnimInstanceBase::CacheDefaultSlotMontageParam(int32 InCacheSlotIndex, FName& ReCacheSlotName) {
    return false;
}


