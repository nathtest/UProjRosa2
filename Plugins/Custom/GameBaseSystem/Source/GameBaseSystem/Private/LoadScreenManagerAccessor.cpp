#include "LoadScreenManagerAccessor.h"
#include "EManagerID.h"

ULoadScreenManagerAccessor::ULoadScreenManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_LOADSCREEN;
}

void ULoadScreenManagerAccessor::SetIsLoadingSequence(bool InIsLoading) {
}

void ULoadScreenManagerAccessor::ReserveLoadScreenType(ELoadScreenType InType) {
}

void ULoadScreenManagerAccessor::RemoveWaitDeactivate(UObject* InObject) {
}

bool ULoadScreenManagerAccessor::IsLoadScreenActive() {
    return false;
}

void ULoadScreenManagerAccessor::AddWaitDeactivate(UObject* InObject) {
}


