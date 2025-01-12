#include "ObjectGeneratorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AObjectGeneratorBase::AObjectGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootCompo"));
    this->MIsEditIndex = false;
    this->MCreateObjectIndex = 0;
    this->MIsDebugConstructionProcess = false;
    this->MCreatedObject = NULL;
}


AObjectBase* AObjectGeneratorBase::GetCreatedObject() const {
    return NULL;
}

void AObjectGeneratorBase::DestoryCreatedObject(AActor* DestroyedActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}


void AObjectGeneratorBase::ActiveDebugConstructionProcess() {
}


