#include "G01GimmickCheckPoint.h"
#include "G01MsgRootComponent.h"
#include "G01MsgWindowComponent.h"

AG01GimmickCheckPoint::AG01GimmickCheckPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMessageRootComponent = CreateDefaultSubobject<UG01MsgRootComponent>(TEXT("MessageRootComponent"));
    this->MMsgWindowComponent = CreateDefaultSubobject<UG01MsgWindowComponent>(TEXT("MsgWindowComponent"));
    //this->MMessageRootComponent->SetupAttachment(AttachPositionsRoot);
    this->MMsgWindowComponent->SetupAttachment(MMessageRootComponent);
}


