#include "GeneratorManagerBase.h"
#include "ActorVisibilityController.h"
#include "EManagerID.h"

AGeneratorManagerBase::AGeneratorManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_GENERATOR;
    this->VisibilityController = CreateDefaultSubobject<UActorVisibilityController>(TEXT("VisibilityController"));
}

void AGeneratorManagerBase::OnDestroyGeneratorActor(AGeneratorBase* InGenerator, AActor* InActor) {
}

void AGeneratorManagerBase::OnDestroyedActor(AActor* InGenerator) {
}

void AGeneratorManagerBase::OnCreateGeneratorActor(AGeneratorBase* InGenerator, AActor* InActor) {
}

FGeneratorArray AGeneratorManagerBase::GetGeneratorsIdUnassigned() const {
    return FGeneratorArray{};
}

TMap<FLevelObjectID, AGeneratorBase*> AGeneratorManagerBase::GetGeneratorsIdAssigned() const {
    return TMap<FLevelObjectID, AGeneratorBase*>();
}

FGeneratorArray AGeneratorManagerBase::GetGeneratorsAll() const {
    return FGeneratorArray{};
}


