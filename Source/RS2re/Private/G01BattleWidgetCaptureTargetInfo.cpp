#include "G01BattleWidgetCaptureTargetInfo.h"

FG01BattleWidgetCaptureTargetInfo::FG01BattleWidgetCaptureTargetInfo() {
    this->WidgetType = EWidgetType::NONE;
    this->Mode = EG01BattleWidgetCaptureSameWidgetExclusiveMode::NotExclusive;
    this->Team = 0;
}

