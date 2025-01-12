#include "G01VisualActorCharacterSettings.h"

UG01VisualActorCharacterSettings::UG01VisualActorCharacterSettings() {
    this->CharacterWeaponSettingsTable = NULL;
}

bool UG01VisualActorCharacterSettings::IsWeaponPose(const TSoftObjectPtr<UAnimSequence>& InAnimPath) const {
    return false;
}

void UG01VisualActorCharacterSettings::FindCharaWeaponSettings(FName InWeaponCategory, bool& OutIsFound, FG01VACharacterWeaponSettingsRow& OutRow) const {
}


