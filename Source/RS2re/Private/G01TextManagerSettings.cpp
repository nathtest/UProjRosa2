#include "G01TextManagerSettings.h"

UG01TextManagerSettings::UG01TextManagerSettings() {
    this->UnsupportedCharacter = TEXT("*");
    this->LanguageTable = NULL;
    this->TextCharacterTable = NULL;
    this->GameTextStringTable = NULL;
    this->DebugGameTextStringTable = NULL;
}

void UG01TextManagerSettings::ReimportDebugText() {
}

void UG01TextManagerSettings::Reimport() {
}


