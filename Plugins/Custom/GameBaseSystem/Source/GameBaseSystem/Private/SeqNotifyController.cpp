#include "SeqNotifyController.h"
#include "GameForceFeedbackManagerAccessor.h"

ASeqNotifyController::ASeqNotifyController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForceFeedbackManagerAccessor = CreateDefaultSubobject<UGameForceFeedbackManagerAccessor>(TEXT("ForceFeedbackManagerAccessor"));
}


