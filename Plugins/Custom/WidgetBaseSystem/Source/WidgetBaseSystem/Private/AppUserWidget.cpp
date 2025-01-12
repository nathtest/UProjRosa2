#include "AppUserWidget.h"

UAppUserWidget::UAppUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIgnorePause = true;
    this->MIsEnableTick = true;
    this->MControlObject = NULL;
    this->MDataObject = NULL;
    this->MCurrentHoverPointerHandleBox = NULL;
    this->MMouseHoldingDuration = 0.00f;
    this->MMouseHoldingIntervalDuration = 0.00f;
    this->MPointerEnterTriggerTimer = 0.00f;
    this->bIsPausing = false;
}

void UAppUserWidget::UnregisterPointerHandleBox(UPointerHandleBox* InPointerHandleBox) {
}

void UAppUserWidget::SetControlObject_Implementation(UObject* InControlObject) {
}

bool UAppUserWidget::ResistAnimationNotify(UWidgetAnimation* InAnimation, FName InNotifyName) {
    return false;
}


void UAppUserWidget::RegisterPointerHandleBox(UPointerHandleBox* InPointerHandleBox) {
}

void UAppUserWidget::PointerHandleTick(float InDeltaTime) {
}

void UAppUserWidget::PlaySwitchAnimation(UWidgetAnimation* InAnimation, int32 InAnimationIndex, float InIntervalTime) {
}




bool UAppUserWidget::OnMousePointerExit(UPointerHandleBox* InPointerHandleBox) {
    return false;
}

bool UAppUserWidget::OnMousePointerEnter(UPointerHandleBox* InPointerHandleBox, const FVector2D& InCursorDelta) {
    return false;
}



void UAppUserWidget::GetPointerHandleBoxByNotifyName(const FString& InNotifyName, TArray<UPointerHandleBox*>& RePointerHandleBoxList) {
}

UAppUserWidgetDataObject* UAppUserWidget::GetDataObject() {
    return NULL;
}

UObject* UAppUserWidget::GetControlObject() {
    return NULL;
}

void UAppUserWidget::GetAllPointerHandleBox(TArray<UPointerHandleBox*>& RePointerHandleBoxList) {
}

void UAppUserWidget::ForceTickActionsAndAnimation(float InDeltaTime) {
}

UWidgetAnimation* UAppUserWidget::FindAnimation(FName InAnimName) {
    return NULL;
}

void UAppUserWidget::DelegateOnDataUpdate(FName InNotifyName) {
}

UAppUserWidgetDataObject* UAppUserWidget::CreateDataObject() {
    return NULL;
}

void UAppUserWidget::Cmd_StopAnimation(FName InNotifyName, bool& ReIsSuccess) {
}

void UAppUserWidget::Cmd_PlaySwitchAnimation(UWidgetAnimation* InAnimation, int32 InAnimationIndex, float InIntervalTime) {
}

void UAppUserWidget::Cmd_PlayResetAnimation(UWidgetAnimation* InAnimation, float InStartAtTime) {
}

void UAppUserWidget::Cmd_PlayFlipFlopAnimation(FName InNotifyName, UWidgetAnimation* InAnimation, int32 InNumberOfLoops, bool InIsPlayForward, float InPlaybackSpeed, bool InIsRestoreState) {
}

void UAppUserWidget::Cmd_PlayAnimation(FName InNotifyName, UWidgetAnimation* InAnimation, float InStartAtTime, int32 InNumberOfLoops, TEnumAsByte<EUMGSequencePlayMode::Type> InPlayMode, float InPlaybackSpeed, bool InIsRestoreState) {
}

void UAppUserWidget::Cmd_IsPlayingAnimation(FName InNotifyName, bool& ReIsPlaying) const {
}

void UAppUserWidget::Cmd_FindAnimations(FName InNotifyName, TArray<UWidgetAnimation*>& ReAnims, bool InIsSearchAll) const {
}


void UAppUserWidget::AnimationAction(FName InFunctionName, FName InNotifyName) {
}


