#include "RoomInfoComponent.h"

URoomInfoComponent::URoomInfoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URoomInfoComponent::UnregisterRoomChanger(AActor* InChanger) {
}

void URoomInfoComponent::RegisterRoomChanger(AActor* InChanger) {
}

TArray<AActor*> URoomInfoComponent::GetRoomChangerList() const {
    return TArray<AActor*>();
}


