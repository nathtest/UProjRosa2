#include "QuestSubsystem.h"

UQuestSubsystem::UQuestSubsystem() {
    this->Helper = NULL;
    this->bIsRestored = false;
    this->LastTargetQuestCore = NULL;
}

void UQuestSubsystem::GetLastTargetQuestCoreData(bool& OutIsValid, UQuestCoreData*& OutCoreData) {
}


