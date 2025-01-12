#include "ShiftGameRule.h"

UShiftGameRule::UShiftGameRule() {
    this->dataTable_ = NULL;
}

void UShiftGameRule::Unregister(UObject* Object) {
}

void UShiftGameRule::Request(const FName& requestGameRule, bool isRemove) {
}

void UShiftGameRule::Register(UObject* Object) {
}

void UShiftGameRule::GetRegisteredObjects(TArray<UObject*>& Objects) {
}

void UShiftGameRule::GetMostHighPriorityGameRule(bool& success, FName& gameRule) {
}

void UShiftGameRule::GetAllRequested(TArray<FName>& allRequested) {
}


