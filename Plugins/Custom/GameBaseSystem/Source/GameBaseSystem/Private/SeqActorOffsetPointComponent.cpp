#include "SeqActorOffsetPointComponent.h"

USeqActorOffsetPointComponent::USeqActorOffsetPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MOffsetLength = 0.00f;
    this->MOffsetDirectionType = ESeqActorOffsetDirection::None;
}

FVector USeqActorOffsetPointComponent::GetOffsetVectorLocal() const {
    return FVector{};
}

FVector USeqActorOffsetPointComponent::GetOffsetVector() const {
    return FVector{};
}

float USeqActorOffsetPointComponent::GetOffsetLength() const {
    return 0.0f;
}

ESeqActorOffsetDirection USeqActorOffsetPointComponent::GetOffsetDirectionType() const {
    return ESeqActorOffsetDirection::None;
}

FVector USeqActorOffsetPointComponent::GetOffsetDirectionLocal() const {
    return FVector{};
}

FVector USeqActorOffsetPointComponent::GetOffsetDirection() const {
    return FVector{};
}


