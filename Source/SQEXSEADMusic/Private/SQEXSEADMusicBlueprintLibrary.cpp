#include "SQEXSEADMusicBlueprintLibrary.h"

USQEXSEADMusicBlueprintLibrary::USQEXSEADMusicBlueprintLibrary() {
}

bool USQEXSEADMusicBlueprintLibrary::SuspendActiveLayer() {
    return false;
}

bool USQEXSEADMusicBlueprintLibrary::StopLayer(FName LayerName) {
    return false;
}

bool USQEXSEADMusicBlueprintLibrary::ResumeActiveLayer() {
    return false;
}

void USQEXSEADMusicBlueprintLibrary::ResetAllLayers() {
}

bool USQEXSEADMusicBlueprintLibrary::PlayLayerWithDynamicLabel(FName LayerName, FSQEXSEADMusicLabelData& DynamicLabel) {
    return false;
}

bool USQEXSEADMusicBlueprintLibrary::PlayLayer(FName LayerName, FName LabelName) {
    return false;
}

bool USQEXSEADMusicBlueprintLibrary::IsPlaying(FName LayerName) {
    return false;
}

bool USQEXSEADMusicBlueprintLibrary::IsLabelLoaded(FName LayerName) {
    return false;
}

FName USQEXSEADMusicBlueprintLibrary::GetPlayingLayerName() {
    return NAME_None;
}

FName USQEXSEADMusicBlueprintLibrary::GetPlayingLabelName(FName LayerName) {
    return NAME_None;
}

void USQEXSEADMusicBlueprintLibrary::GetLayerNames(TArray<FName>& OutLayerNameList) {
}

void USQEXSEADMusicBlueprintLibrary::GetLabelNames(TArray<FName>& OutLabelNameList) {
}


