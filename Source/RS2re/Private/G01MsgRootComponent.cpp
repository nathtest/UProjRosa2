#include "G01MsgRootComponent.h"

UG01MsgRootComponent::UG01MsgRootComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMsgWindowComponent = NULL;
    this->MSimpleTalkComponent = NULL;
}

void UG01MsgRootComponent::SetupComponent(URelativePositionComponent* InSimpleTalkComponent, UG01MsgWindowComponent* InMsgWindowComponent) {
}

UG01MsgWindowComponent* UG01MsgRootComponent::GetTalkComponent() const {
    return NULL;
}

URelativePositionComponent* UG01MsgRootComponent::GetSimpleTalkComponent() const {
    return NULL;
}

float UG01MsgRootComponent::GetInvalidRangeRadius() const {
    return 0.0f;
}

FVector UG01MsgRootComponent::GetInvalidRangePosition() const {
    return FVector{};
}


