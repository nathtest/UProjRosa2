#include "ScreenTransitionWidget.h"
#include "EWidgetType.h"

UScreenTransitionWidget::UScreenTransitionWidget() {
    this->MWidgetTypeId = EWidgetType::SYSTEM_SCREEN_TRANSITION;
    this->MCurrentType = EScreenTransitionType::STANDARD_BLACK;
}

void UScreenTransitionWidget::SetScreenTransitionType(EScreenTransitionType InType) {
}

void UScreenTransitionWidget::ScreenTransitionReset(bool InIsOn) {
}

void UScreenTransitionWidget::ScreenTransitionOut(FName InNotifyName, float InTime, EScreenTransitionType InType) {
}

void UScreenTransitionWidget::ScreenTransitionIn(EScreenTransitionType InType, FName InNotifyName, float InTime) {
}





