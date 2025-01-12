#include "G01BattleFieldEnvSoundComponent.h"

UG01BattleFieldEnvSoundComponent::UG01BattleFieldEnvSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnvSoundInfoTable = NULL;
    this->IsStopFieldEnvSound = false;
    this->AttenuationAsset = NULL;
    this->SoundBank = NULL;
}

USQEXSEADSoundBank* UG01BattleFieldEnvSoundComponent::LoadSound_Implementation(FSQEXSEADBankSoundEntry InBank) {
    return NULL;
}

bool UG01BattleFieldEnvSoundComponent::CheckStopFieldEnvSound() const {
    return false;
}


