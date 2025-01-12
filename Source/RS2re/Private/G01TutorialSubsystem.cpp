#include "G01TutorialSubsystem.h"

UG01TutorialSubsystem::UG01TutorialSubsystem() {
    this->bIsEnableTutorial = false;
    this->Helper = NULL;
}

void UG01TutorialSubsystem::SetEnableTutorial(bool InIsEnabled) {
}

void UG01TutorialSubsystem::Opened(const FG01TutorialID& InTutorialId) {
}

bool UG01TutorialSubsystem::IsEnableTutorial() const {
    return false;
}

bool UG01TutorialSubsystem::IsDisplayed(const FG01TutorialID& InTutorialId) const {
    return false;
}

void UG01TutorialSubsystem::FindTutorialData(bool& OutIsFound, FG01TutorialParamRow& OutData, const FG01TutorialID& InTutorialId) {
}

void UG01TutorialSubsystem::CreateTutorial(FG01TutorialID InTutorialId) {
}


