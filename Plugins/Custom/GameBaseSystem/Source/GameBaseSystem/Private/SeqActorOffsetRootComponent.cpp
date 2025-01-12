#include "SeqActorOffsetRootComponent.h"

USeqActorOffsetRootComponent::USeqActorOffsetRootComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FVector USeqActorOffsetRootComponent::GetOffsetVectorLocal(ESeqActorOffsetDirection InDir) const {
    return FVector{};
}

FVector USeqActorOffsetRootComponent::GetOffsetVector(ESeqActorOffsetDirection InDir) const {
    return FVector{};
}

float USeqActorOffsetRootComponent::GetOffsetLength(ESeqActorOffsetDirection InDir) const {
    return 0.0f;
}

FVector USeqActorOffsetRootComponent::GetOffsetDirectionLocal(ESeqActorOffsetDirection InDir) const {
    return FVector{};
}

FVector USeqActorOffsetRootComponent::GetOffsetDirection(ESeqActorOffsetDirection InDir) const {
    return FVector{};
}

void USeqActorOffsetRootComponent::GetMaxVectorLocal(ESeqActorOffsetDirection& OutDir, float& OutSize, FVector& OutVector) {
}

void USeqActorOffsetRootComponent::GetMaxVector(ESeqActorOffsetDirection& OutDir, float& OutSize, FVector& OutVector) {
}

void USeqActorOffsetRootComponent::EditorTick() {
}


