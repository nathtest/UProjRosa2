#include "G01GimmickSealedDoorBase.h"
#include "G01MsgRootComponent.h"
#include "G01MsgWindowComponent.h"

AG01GimmickSealedDoorBase::AG01GimmickSealedDoorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMessageRootComponent = CreateDefaultSubobject<UG01MsgRootComponent>(TEXT("MessageRootComponent"));
    this->MMsgWindowComponent = CreateDefaultSubobject<UG01MsgWindowComponent>(TEXT("MsgWindowComponent"));
    //this->MMessageRootComponent->SetupAttachment(AttachPositionsRoot);
    this->MMsgWindowComponent->SetupAttachment(MMessageRootComponent);
}


