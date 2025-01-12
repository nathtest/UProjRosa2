#include "ObjectBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AttachPositionComponent.h"
#include "InteractReceiverHelperComponent.h"

AObjectBase::AObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootCompo"));
    this->AttachPositionsRoot = CreateDefaultSubobject<UAttachPositionComponent>(TEXT("AttachPositionsRoot"));
    this->MReceiverHelper = CreateDefaultSubobject<UInteractReceiverHelperComponent>(TEXT("ReceiveInteractManager"));
    this->AttachPositionsRoot->SetupAttachment(RootComponent);
}

void AObjectBase::InitializeInteract() {
}

AActor* AObjectBase::GetInteractObject() {
    return NULL;
}


