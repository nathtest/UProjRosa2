#include "G01ProgressBarRepeatComponent.h"

UG01ProgressBarRepeatComponent::UG01ProgressBarRepeatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WidgetObject = NULL;
    this->ProgressBarAnimSpeed = 1.00f;
}

void UG01ProgressBarRepeatComponent::ThrowUseGaugeInfo() {
}

void UG01ProgressBarRepeatComponent::SetWidget(UObject* InWidget) {
}

void UG01ProgressBarRepeatComponent::SetTurningPointList(const TArray<float>& InList, bool IsUseAnime) {
}

void UG01ProgressBarRepeatComponent::SetReverseUsedAnimationIndex(bool In) {
}

void UG01ProgressBarRepeatComponent::SetRepeatCount(int32 InCount) {
}

void UG01ProgressBarRepeatComponent::SetPercentage(float InPercent, int32 InIndex, bool InImmediate) {
}

void UG01ProgressBarRepeatComponent::SetMaxPercentage(float InMax) {
}

void UG01ProgressBarRepeatComponent::GetTurningPoint(float InPercent, int32& OutPointIndex) {
}

void UG01ProgressBarRepeatComponent::GetPercentage(int32 InIndex, float& OutPercent) {
}

void UG01ProgressBarRepeatComponent::GetAnimPercentage(int32 InIndex, float& OutPercent) {
}


