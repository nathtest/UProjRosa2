#include "G01FlagSwitchObjectBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=FlagSystemManagerAccessCompo -FallbackName=FlagSystemManagerAccessCompo

AG01FlagSwitchObjectBase::AG01FlagSwitchObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFlagManagerAccessor = CreateDefaultSubobject<UFlagSystemManagerAccessCompo>(TEXT("FlagManagerAccessor"));
    this->MObjectActorA = CreateDefaultSubobject<UChildActorComponent>(TEXT("ObjectActorCompoA"));
    this->MObjectActorB = CreateDefaultSubobject<UChildActorComponent>(TEXT("ObjectActorCompoB"));
    //this->MObjectActorA->SetupAttachment(AttachPositionsRoot);
    //this->MObjectActorB->SetupAttachment(AttachPositionsRoot);
}

void AG01FlagSwitchObjectBase::OnSwitchObject_Implementation(bool InFlagValue) {
}


