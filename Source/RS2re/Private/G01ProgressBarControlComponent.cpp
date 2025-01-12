#include "G01ProgressBarControlComponent.h"

UG01ProgressBarControlComponent::UG01ProgressBarControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetObject = NULL;
    this->ProgressBarAnimSpeed = 1.00f;
}

void UG01ProgressBarControlComponent::SetWidget(UObject* InWidget) {
}

void UG01ProgressBarControlComponent::SetTurningPointList(const TArray<float>& InList, bool IsUseAnime) {
}

void UG01ProgressBarControlComponent::SetPercentage(float InPercent, bool InImmediate) {
}

void UG01ProgressBarControlComponent::SetMaxPercentage(float InMax) {
}

void UG01ProgressBarControlComponent::GetTurningPoint(float InPercent, int32& OutPointIndex) {
}

void UG01ProgressBarControlComponent::GetPercentage(float& OutPercent) {
}

void UG01ProgressBarControlComponent::GetAnimPercentage(float& OutPercent) {
}


