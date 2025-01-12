#include "AttachControlComponent.h"

UAttachControlComponent::UAttachControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MOwnerSceneComponent = NULL;
}

void UAttachControlComponent::SetVisibilityByDetailName(FName InDetaleName, bool InIsVisible) {
}

void UAttachControlComponent::SetVisibilityByCategory(EVisualActorAttachCategoryEnum InCategory, bool InIsVisible) {
}

TArray<USceneComponent*> UAttachControlComponent::GetControlSceneCompByDetail(FName InDetailName, bool InIsAttached) {
    return TArray<USceneComponent*>();
}

TArray<USceneComponent*> UAttachControlComponent::GetControlSceneCompByCategory(EVisualActorAttachCategoryEnum InCategory, bool InIsAttached) {
    return TArray<USceneComponent*>();
}

bool UAttachControlComponent::DetachByDetailName(FName InDetailName, bool InIsVisible) {
    return false;
}

bool UAttachControlComponent::DetachByCategory(EVisualActorAttachCategoryEnum InAttachCategory, bool InIsVisible) {
    return false;
}

bool UAttachControlComponent::AttachByDetailName(FName InDetailName, bool InIsVisible) {
    return false;
}

bool UAttachControlComponent::AttachByCategory(EVisualActorAttachCategoryEnum InAttachCategory, bool InIsVisible) {
    return false;
}

bool UAttachControlComponent::Attach(USceneComponent* InAttachObject, FName InSocket, EVisualActorAttachCategoryEnum InAttachCategory, FName InDetailName, bool InIsVisible) {
    return false;
}


