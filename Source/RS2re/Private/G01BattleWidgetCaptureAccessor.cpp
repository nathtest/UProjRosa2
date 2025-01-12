#include "G01BattleWidgetCaptureAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01BattleWidgetCaptureAccessor::UG01BattleWidgetCaptureAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_DEBUG_BATTLE_WIDGET_CAPTURE;
}

void UG01BattleWidgetCaptureAccessor::SetThresholdFrame(int32 InFrame) {
}

void UG01BattleWidgetCaptureAccessor::SetTargetWidget(EWidgetType InWidgetID, EG01BattleWidgetCaptureSameWidgetExclusiveMode InMode, int32 InTeam) {
}

bool UG01BattleWidgetCaptureAccessor::IsExistManager() const {
    return false;
}

void UG01BattleWidgetCaptureAccessor::EndCapture() {
}

void UG01BattleWidgetCaptureAccessor::ClearTargetUI() {
}

void UG01BattleWidgetCaptureAccessor::BeginCapture() {
}


