#include "WidgetFuncLib.h"

UWidgetFuncLib::UWidgetFuncLib() {
}

bool UWidgetFuncLib::Func_SettingWidgetDrawData(UCanvasPanelSlot* InCanvasPanelSlot, FWidgetDrawDataInfo InWidgetDrawData) {
    return false;
}

FWidgetDrawDataInfo UWidgetFuncLib::Func_ExtractWidgetDrawData(UCanvasPanelSlot* InCanvasPanelSlot) {
    return FWidgetDrawDataInfo{};
}


