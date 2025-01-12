#include "G01SlomoSubsystem.h"

UG01SlomoSubsystem::UG01SlomoSubsystem() {
    this->CurrentSlomo = 1.00f;
    this->TagDataTable = NULL;
    this->MyHelperObject = NULL;
}

void UG01SlomoSubsystem::SetSlomo(FName InTag, float InSlomo) {
}

void UG01SlomoSubsystem::RemoveSlomo(FName InTag) {
}

void UG01SlomoSubsystem::GetHelperObject(UG01SlomoSubsystemHelper*& OutHelper) {
}

void UG01SlomoSubsystem::GetCurrentSlomo(float& OutSlomo) {
}

void UG01SlomoSubsystem::FindSlomo(FName InTag, bool& OutFound, float& OutSlomo) {
}


