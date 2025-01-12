#include "GameBootSubsystem.h"

UGameBootSubsystem::UGameBootSubsystem() {
    this->HelperObject = NULL;
}

void UGameBootSubsystem::SetOverrideBootLevel(TSoftObjectPtr<UWorld> InLevel) {
}

TSoftObjectPtr<UWorld> UGameBootSubsystem::GetOverrideBootLevel() {
    return NULL;
}


