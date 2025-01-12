#include "SQEXSEADBlueprintLibrary.h"

USQEXSEADBlueprintLibrary::USQEXSEADBlueprintLibrary() {
}

bool USQEXSEADBlueprintLibrary::StopCategorySounds(FName CategoryName, float FadeOutTime) {
    return false;
}

USQEXSEADSoundComponent* USQEXSEADBlueprintLibrary::SpawnSoundAttached(USQEXSEADSoundBank* Bank, FName SoundName, USceneComponent* AttachToComponent, FSQEXSEAD3DSoundParameters Params, FName AttachToSocketName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, USQEXSEADSoundAttenuation* OverrideAttenuationAsset) {
    return NULL;
}

USQEXSEADSoundComponent* USQEXSEADBlueprintLibrary::SpawnSoundAtLocation(UObject* WorldContextObject, USQEXSEADSoundBank* Bank, FName SoundName, FVector Location, FSQEXSEAD3DSoundParameters Params, bool bAutoDestroy, USQEXSEADSoundAttenuation* OverrideAttenuationAsset) {
    return NULL;
}

USQEXSEADSoundComponent* USQEXSEADBlueprintLibrary::SpawnSound2D(UObject* WorldContextObject, USQEXSEADSoundBank* Bank, FName SoundName, FSQEXSEAD2DSoundParameters Params, bool bAutoDestroy) {
    return NULL;
}

bool USQEXSEADBlueprintLibrary::SoundStop(FSQEXSeadHandleBP InSoundHandle, float FadeOutTime) {
    return false;
}

bool USQEXSEADBlueprintLibrary::SetZeroOneValue(FSQEXSeadHandleBP InSoundHandle, int32 ZeroOneSlotIndex, float ZeroOneValue, float FadeTime) {
    return false;
}

bool USQEXSEADBlueprintLibrary::SetSoundVolume(FSQEXSeadHandleBP InSoundHandle, float VolumeMultiplier, float FadeTime) {
    return false;
}

bool USQEXSEADBlueprintLibrary::SetSoundPause(FSQEXSeadHandleBP InSoundHandle, bool bPause, float PausingFadeTime) {
    return false;
}

bool USQEXSEADBlueprintLibrary::SetNextSection(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName SectionName) {
    return false;
}

bool USQEXSEADBlueprintLibrary::SetMode(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName ModeName) {
    return false;
}

bool USQEXSEADBlueprintLibrary::SetExternalParameter(FName ParameterName, float Value, float FadeTime) {
    return false;
}

bool USQEXSEADBlueprintLibrary::SetEffectPreset(FName EffectPresetName, float FadeTime) {
    return false;
}

bool USQEXSEADBlueprintLibrary::SetCategoryVolume(FName CategoryName, FName LayerName, float VolumeMultiplier, float FadeTime) {
    return false;
}

bool USQEXSEADBlueprintLibrary::SetCategoryPitch(FName CategoryName, float PitchMultiplier, float FadeTime) {
    return false;
}

bool USQEXSEADBlueprintLibrary::SetCategoryPause(FName CategoryName, bool bPause, float PausingFadeTime) {
    return false;
}

bool USQEXSEADBlueprintLibrary::Reset(FSQEXSeadHandleBP InSoundHandle) {
    return false;
}

FSQEXSeadHandleBP USQEXSEADBlueprintLibrary::PlaySoundAttached(USQEXSEADSoundBank* SoundBank, FName SoundName, USceneComponent* AttachToComponent, FSQEXSEAD3DSoundParameters Params, FName AttachToSocketName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, USQEXSEADSoundAttenuation* OverrideAttenuationAsset) {
    return FSQEXSeadHandleBP{};
}

FSQEXSeadHandleBP USQEXSEADBlueprintLibrary::PlaySound3D(UObject* WorldContextObject, USQEXSEADSoundBank* SoundBank, FName SoundName, FVector Location, FSQEXSEAD3DSoundParameters Params, USQEXSEADSoundAttenuation* OverrideAttenuationAsset) {
    return FSQEXSeadHandleBP{};
}

FSQEXSeadHandleBP USQEXSEADBlueprintLibrary::PlaySound2D(UObject* WorldContextObject, USQEXSEADSoundBank* SoundBank, FName SoundName, FSQEXSEAD2DSoundParameters Params) {
    return FSQEXSeadHandleBP{};
}

bool USQEXSEADBlueprintLibrary::PlayFrom(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName SectionName, FName ModeName, float FadeInTime, float SeekTime) {
    return false;
}

bool USQEXSEADBlueprintLibrary::IsValid(FSQEXSeadHandleBP InSoundHandle) {
    return false;
}

bool USQEXSEADBlueprintLibrary::IsPlaying(FSQEXSeadHandleBP InSoundHandle) {
    return false;
}

bool USQEXSEADBlueprintLibrary::IsPausing(FSQEXSeadHandleBP InSoundHandle) {
    return false;
}

FSQEXSEADTimingInfo USQEXSEADBlueprintLibrary::GetSyncTiming(FSQEXSeadHandleBP InSoundHandle) {
    return FSQEXSEADTimingInfo{};
}

float USQEXSEADBlueprintLibrary::GetPlayingPosition(FSQEXSeadHandleBP InSoundHandle) {
    return 0.0f;
}

int32 USQEXSEADBlueprintLibrary::GetNumMarkerPoint(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName SectionName, FName ModeName) {
    return 0;
}

int32 USQEXSEADBlueprintLibrary::GetNumMarker(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName SectionName) {
    return 0;
}

FSQEXSEADTimingInfo USQEXSEADBlueprintLibrary::GetNearTiming(FSQEXSeadHandleBP InSoundHandle) {
    return FSQEXSEADTimingInfo{};
}

bool USQEXSEADBlueprintLibrary::GetMarkerPointInfo(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName SectionName, int32 MarkerIndex, int32 MarkerPointIndex, FSQEXSEADMarkerPointInfo& Dest) {
    return false;
}

FSQEXSEADTimingInfo USQEXSEADBlueprintLibrary::GetJustTiming(FSQEXSeadHandleBP InSoundHandle) {
    return FSQEXSEADTimingInfo{};
}

float USQEXSEADBlueprintLibrary::GetCurrentSectionPlaySec(FSQEXSeadHandleBP InSoundHandle) {
    return 0.0f;
}

float USQEXSEADBlueprintLibrary::GetCategoryVolume(FName CategoryName, FName LayerName) {
    return 0.0f;
}

bool USQEXSEADBlueprintLibrary::CallEvent(FName EventName) {
    return false;
}

bool USQEXSEADBlueprintLibrary::BlendMode(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName ModeName, float Rate, float FadeTime) {
    return false;
}


