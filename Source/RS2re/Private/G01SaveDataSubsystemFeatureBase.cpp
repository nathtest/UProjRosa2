#include "G01SaveDataSubsystemFeatureBase.h"

UG01SaveDataSubsystemFeatureBase::UG01SaveDataSubsystemFeatureBase() {
    this->bIsTickEnabled = false;
}

void UG01SaveDataSubsystemFeatureBase::SetTickEnabled(bool InIsEnabled) {
}

void UG01SaveDataSubsystemFeatureBase::RetriggerableDelay(float InDuration, FLatentActionInfo InLatentInfo) {
}





bool UG01SaveDataSubsystemFeatureBase::IsTickEnabled() const {
    return false;
}

APlayerController* UG01SaveDataSubsystemFeatureBase::GetPlayerController() const {
    return NULL;
}

void UG01SaveDataSubsystemFeatureBase::Delay(float InDuration, FLatentActionInfo InLatentInfo) {
}


