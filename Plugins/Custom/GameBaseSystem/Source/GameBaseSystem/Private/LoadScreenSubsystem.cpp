#include "LoadScreenSubsystem.h"

ULoadScreenSubsystem::ULoadScreenSubsystem() {
    this->HelperObject = NULL;
    this->MLoadScreenType = ELoadScreenType::STANDARD;
}

void ULoadScreenSubsystem::UnregisterCustomTask(FName InKey) {
}

void ULoadScreenSubsystem::SetLoadScreenType(ELoadScreenType InType) {
}

void ULoadScreenSubsystem::RegisterCustomTask(FName InKey, const FLoadScreenCustomTaskCompleteCheck& InCheckFunction) {
}

bool ULoadScreenSubsystem::IsCompleteCustomTask(FName InKey) {
    return false;
}

ELoadScreenType ULoadScreenSubsystem::GetLoadScreenType() {
    return ELoadScreenType::STANDARD;
}


