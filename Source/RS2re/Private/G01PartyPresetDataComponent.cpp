#include "G01PartyPresetDataComponent.h"

UG01PartyPresetDataComponent::UG01PartyPresetDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PresetDataAsset = NULL;
}

bool UG01PartyPresetDataComponent::GetPresetKey(FName& OutKey) const {
    return false;
}


