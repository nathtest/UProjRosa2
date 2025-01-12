#include "SQEXSEADVolume.h"
#include "Net/UnrealNetwork.h"

ASQEXSEADVolume::ASQEXSEADVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bEnabled = true;
    this->bUseSimplifiedEncompassesPointCheck = true;
    this->Priority = 0.00f;
}

void ASQEXSEADVolume::SetPriority(float NewPriority) {
}

void ASQEXSEADVolume::SetEnabled(bool bNewEnabled) {
}

void ASQEXSEADVolume::SetEffectPreset(const FEffectPresetPackInfo& NewEffectPreset) {
}

void ASQEXSEADVolume::SetAmbientSound(const FAmbientSoundInfo& NewAmbientSound) {
}

void ASQEXSEADVolume::OnRep_bEnabled() {
}

void ASQEXSEADVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASQEXSEADVolume, bEnabled);
}


