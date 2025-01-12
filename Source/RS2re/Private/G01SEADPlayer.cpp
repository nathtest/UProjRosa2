#include "G01SEADPlayer.h"

UG01SEADPlayer::UG01SEADPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UG01SEADPlayer::StopAll(float InFadeOutTime) {
}

void UG01SEADPlayer::Stop(FName InKey, float InFadeOutTime) {
}

void UG01SEADPlayer::Resume(FName InKey, float InResumeFadeTime) {
}

void UG01SEADPlayer::PlayAttached(FName InKey, USceneComponent* InTarget, FSQEXSEAD3DSoundParameters InParams, FName InSocketName, const FVector& InLocation, const FRotator& InRotation, TEnumAsByte<EAttachLocation::Type> InLocationType, USQEXSEADSoundAttenuation* InOverrideAttenuationAsset) {
}

void UG01SEADPlayer::Play3D(FName InKey, const FVector& InLocation, FSQEXSEAD3DSoundParameters InParams, USQEXSEADSoundAttenuation* InOverrideAttenuationAsset) {
}

void UG01SEADPlayer::Play(FName InKey, FSQEXSEAD2DSoundParameters InParams) {
}

void UG01SEADPlayer::Pause(FName InKey, float InPausingFadeTime) {
}

bool UG01SEADPlayer::IsPlayingAny() const {
    return false;
}

bool UG01SEADPlayer::IsPlaying(FName InKey) const {
    return false;
}

void UG01SEADPlayer::AssignBankEntry(FName InKey, const FG1SEADPlayerEntry& InEntry) {
}

void UG01SEADPlayer::AssignBank(FName InKey, USQEXSEADSoundBank* InBank, FName InSoundName, bool InIsAllowMultiPlay) {
}


