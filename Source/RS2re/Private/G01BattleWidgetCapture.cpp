#include "G01BattleWidgetCapture.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiManagerAccessor -FallbackName=UiManagerAccessor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=WidgetManagerAccessor -FallbackName=WidgetManagerAccessor

AG01BattleWidgetCapture::AG01BattleWidgetCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_DEBUG_BATTLE_WIDGET_CAPTURE;
    this->ThresholdFrame = 5;
    this->ThresholdFrameCount = 0;
    this->overlapPercent = 0.00f;
    this->UiManagerAccessor = CreateDefaultSubobject<UUiManagerAccessor>(TEXT("UiManagerAccessor"));
    this->WidgetManagerAccessor = CreateDefaultSubobject<UWidgetManagerAccessor>(TEXT("WidgetManagerAccessor"));
}


