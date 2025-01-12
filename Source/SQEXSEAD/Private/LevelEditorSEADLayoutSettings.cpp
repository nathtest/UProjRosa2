#include "LevelEditorSEADLayoutSettings.h"

ULevelEditorSEADLayoutSettings::ULevelEditorSEADLayoutSettings() {
    this->bEnableEditorLayoutAudio = false;
    this->DefaultLayoutSoundInnerRadius = 0.00f;
    this->DefaultLayoutSoundOuterRadius = 0.00f;
    this->LayoutSoundWireframeWidth = 0.00f;
    this->NumLayoutSoundSides = 16;
    this->NumLayoutSoundRings = 16;
    this->bDrawLayoutSoundInsideOut = false;
    this->bHideWireframe = false;
    this->bDrawUnselectedSounds = false;
    this->bDrawUnselectedVolumes = false;
}


