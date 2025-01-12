#include "G01EventUnitNormalTalk.h"
#include "G01MsgDRankWindowUiContAccessor.h"

AG01EventUnitNormalTalk::AG01EventUnitNormalTalk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WindowUiAccessor = CreateDefaultSubobject<UG01MsgDRankWindowUiContAccessor>(TEXT("WindowUiAccessor"));
    this->IsAutoClose = true;
    this->IsChangeAIState = true;
}

void AG01EventUnitNormalTalk::OnCompleteAllMessage(AUiController* InUiController) {
}


