#include "G01EventUnitShowMsgWindow.h"
#include "G01MsgCheckUiContAccessor.h"

AG01EventUnitShowMsgWindow::AG01EventUnitShowMsgWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMessageWindowUiAccessor = CreateDefaultSubobject<UG01MsgCheckUiContAccessor>(TEXT("MessageWindowUiAccessor"));
    this->MTextJustify = ETextJustify::Left;
}

void AG01EventUnitShowMsgWindow::OnCompleteAllMessage(AUiController* InUiController) {
}


