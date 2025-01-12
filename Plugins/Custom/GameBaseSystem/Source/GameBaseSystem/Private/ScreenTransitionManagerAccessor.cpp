#include "ScreenTransitionManagerAccessor.h"
#include "EManagerID.h"

UScreenTransitionManagerAccessor::UScreenTransitionManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_SCREENTRANSITION;
}

void UScreenTransitionManagerAccessor::TransitionUnlock(AActor* InObject) {
}

void UScreenTransitionManagerAccessor::TransitionLock(AActor* InObject) {
}

void UScreenTransitionManagerAccessor::SetTransitionType(EScreenTransitionType InType) {
}

void UScreenTransitionManagerAccessor::ScreenTransitionReset(bool InIsOn) {
}

void UScreenTransitionManagerAccessor::ScreenTransitionOut(float InTime, EScreenTransitionType InType) {
}

void UScreenTransitionManagerAccessor::ScreenTransitionIn(EScreenTransitionType InType, float InTime) {
}

bool UScreenTransitionManagerAccessor::IsHideScreen() {
    return false;
}

bool UScreenTransitionManagerAccessor::IsActiveScreenTransition() {
    return false;
}

void UScreenTransitionManagerAccessor::GetIsTransitionLock(bool& OutIsLock) {
}


