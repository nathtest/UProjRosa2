#include "AttachmentControlComponent.h"

UAttachmentControlComponent::UAttachmentControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsSetup = false;
    this->MainComponent = NULL;
}

void UAttachmentControlComponent::Setup(USkeletalMeshComponent* InSkeletalMesh) {
}

void UAttachmentControlComponent::SetAttachmentVisible(FName InKeyName, bool InIsVisible) {
}

AVisualActor* UAttachmentControlComponent::GetAttachmentVisualActor(FName InKeyName) {
    return NULL;
}

TArray<AVisualActor*> UAttachmentControlComponent::GetAllAttachmentVisualActor() {
    return TArray<AVisualActor*>();
}

void UAttachmentControlComponent::FindAttachmentVisualActorData(bool& OutIsFound, FVisualActorAttachmentStruct& OutData, FName InKeyName) const {
}

void UAttachmentControlComponent::FindAttachmentDefaultData(bool& OutIsFound, FVisualActorDefaultAttachmentStruct& OutData, FName InKeyName) const {
}

AVisualActor* UAttachmentControlComponent::DetachAttachment(FName InKeyName) {
    return NULL;
}

void UAttachmentControlComponent::AttachAttachment(FName InKeyName, AVisualActor* InVisualActor, FName InSocketName, FName InTagName, bool InIsVisible) {
}

void UAttachmentControlComponent::AddDefaultAttachment(FName InKeyName, FVisualActorDefaultAttachmentStruct InData) {
}


