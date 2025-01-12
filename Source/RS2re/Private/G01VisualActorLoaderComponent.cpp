#include "G01VisualActorLoaderComponent.h"

UG01VisualActorLoaderComponent::UG01VisualActorLoaderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsVisualActorLoading = false;
    this->IsAnimationLoading = false;
}

void UG01VisualActorLoaderComponent::SpawnVisualActor(FName InVisualActorName, AVisualActor*& ReSpawnedActor) {
}

void UG01VisualActorLoaderComponent::LoadVisualActorInQueue() {
}


void UG01VisualActorLoaderComponent::LoadVisualActorAssets(TMap<FName, TSoftClassPtr<AVisualActor>> InVisualActorInfo) {
}

void UG01VisualActorLoaderComponent::LoadAnimationInQueue() {
}


void UG01VisualActorLoaderComponent::LoadAnimationAssets(TMap<FName, TSoftObjectPtr<UObject>> InAnimationInfo) {
}

void UG01VisualActorLoaderComponent::IsLoadingAssets(bool& ReIsLoading) {
}

void UG01VisualActorLoaderComponent::GetAnimationObject(FName InAnimationName, UObject*& ReAnimationObject) {
}

void UG01VisualActorLoaderComponent::DestoryVisualActor(FName InVisualActorName) {
}

void UG01VisualActorLoaderComponent::DestoryAnimationObject(FName InAnimationName) {
}

void UG01VisualActorLoaderComponent::DestoryAllVisualActor() {
}

void UG01VisualActorLoaderComponent::DestoryAllAnimationObject() {
}


