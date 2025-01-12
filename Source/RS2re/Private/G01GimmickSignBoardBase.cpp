#include "G01GimmickSignBoardBase.h"
#include "G01MsgRootComponent.h"
#include "G01MsgWindowComponent.h"

AG01GimmickSignBoardBase::AG01GimmickSignBoardBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MMessageRootComponent = CreateDefaultSubobject<UG01MsgRootComponent>(TEXT("MessageRootComponent"));
    this->MMsgWindowComponent = CreateDefaultSubobject<UG01MsgWindowComponent>(TEXT("MsgWindowComponent"));
    //this->MMessageRootComponent->SetupAttachment(AttachPositionsRoot);
    this->MMsgWindowComponent->SetupAttachment(MMessageRootComponent);
}


