#include "DebugMenuPageBase.h"

UDebugMenuPageBase::UDebugMenuPageBase() {
    this->bIsTickable = false;
    this->bIsTickableWhenPaused = false;
}

void UDebugMenuPageBase::SetTickEnabled(bool InIsEnabled) {
}

void UDebugMenuPageBase::ReceiveTick_Implementation(float InDeltaTime) {
}


