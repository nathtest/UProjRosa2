#include "StreamingManagerAccessComponent.h"
#include "EManagerID.h"

UStreamingManagerAccessComponent::UStreamingManagerAccessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_STREAMING;
}

void UStreamingManagerAccessComponent::StopAllStreaming() {
}

void UStreamingManagerAccessComponent::StartAllStreaming() {
}


