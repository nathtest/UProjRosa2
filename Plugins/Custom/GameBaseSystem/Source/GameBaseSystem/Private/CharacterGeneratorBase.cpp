#include "CharacterGeneratorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ACharacterGeneratorBase::ACharacterGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootCompo"));
    this->MCreatedObject = NULL;
    this->MCreateObjectClassEdit = true;
    this->MIsUseController = true;
    this->MIsDebugConstructionProcess = false;
}

void ACharacterGeneratorBase::OnOverrideAIParam(ACharacterBase* InPlayerCharacter) {
}

ACharacterBase* ACharacterGeneratorBase::GetCreatedObject() const {
    return NULL;
}

void ACharacterGeneratorBase::DestoryCreatedObject(AActor* DestroyedActor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

float ACharacterGeneratorBase::DebugGetCreateCharaHalfHeight() const {
    return 0.0f;
}


void ACharacterGeneratorBase::ActiveDebugConstructionProcess() {
}


