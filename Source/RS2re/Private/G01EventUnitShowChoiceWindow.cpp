#include "G01EventUnitShowChoiceWindow.h"
#include "G01MsgChoiceUiContAccessor.h"

AG01EventUnitShowChoiceWindow::AG01EventUnitShowChoiceWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMessageChoiceUiAccessor = CreateDefaultSubobject<UG01MsgChoiceUiContAccessor>(TEXT("MessageChoiceUiAccessor"));
}

void AG01EventUnitShowChoiceWindow::OnWindowDeactivate(AUiController* InMessageObject) {
}



