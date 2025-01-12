#include "GameViewWidget.h"

UGameViewWidget::UGameViewWidget() {
    this->MIsAutoLoad = true;
    this->MWidgetTypeId = EWidgetType::NONE;
    this->MWidgetNumber = 0;
}

void UGameViewWidget::SetSettingData(FWidgetSettingDataInfo InSettingData) {
}

void UGameViewWidget::GetSettingData(FWidgetSettingDataInfo& ReSettingData) {
}

FWidgetDrawDataInfo UGameViewWidget::GetDrawData() {
    return FWidgetDrawDataInfo{};
}

void UGameViewWidget::CreateWidgetID() {
}


