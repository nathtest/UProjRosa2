#include "FlagEventReceiveComponent.h"

UFlagEventReceiveComponent::UFlagEventReceiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MIsForceBroadcast_OnFlagChanged = false;
}

void UFlagEventReceiveComponent::RemoveEventFlagChanged(FFlagChangedEventReserveParam InParam) {
}

void UFlagEventReceiveComponent::AddEventFlagChanged(FFlagChangedEventReserveParam InParam) {
}


