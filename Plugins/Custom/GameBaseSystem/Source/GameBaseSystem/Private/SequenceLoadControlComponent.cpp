#include "SequenceLoadControlComponent.h"
#include "SequenceResources.h"

USequenceLoadControlComponent::USequenceLoadControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MSequenceResourceClass = USequenceResources::StaticClass();
    this->TexturePreStreamTime = 1.00f;
    this->MSequencePlayer = NULL;
    this->SequenceResource = NULL;
    this->IsLoadRequested = false;
    this->LoadCompleteDelayTime = 0.00f;
}


