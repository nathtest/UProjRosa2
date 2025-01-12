#include "WidgetBaseSystemGameSetting.h"

UWidgetBaseSystemGameSetting::UWidgetBaseSystemGameSetting() {
    this->MPointerEnterTriggerDelay = 0.05f;
    this->MPointerEnterTriggerCursorDelta = 0.50f;
    this->MMouseHoldEnterTriggerDelay = 0.15f;
    this->MMouseHoldIntervalTriggerDelay = 0.10f;
}

float UWidgetBaseSystemGameSetting::GetPointerEnterTriggerDelay() {
    return 0.0f;
}

float UWidgetBaseSystemGameSetting::GetPointerEnterTriggerCursorDelta() {
    return 0.0f;
}

float UWidgetBaseSystemGameSetting::GetMouseHoldIntervalTriggerDelay() {
    return 0.0f;
}

float UWidgetBaseSystemGameSetting::GetMouseHoldEnterTriggerDelay() {
    return 0.0f;
}


