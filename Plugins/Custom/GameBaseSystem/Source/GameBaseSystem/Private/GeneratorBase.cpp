#include "GeneratorBase.h"
#include "FlagEventReceiveComponent.h"
#include "LoadControlActorComponent.h"
#include "QuestEventReceiveComponent.h"

AGeneratorBase::AGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MQuestEventReceiver = CreateDefaultSubobject<UQuestEventReceiveComponent>(TEXT("QuestEventReceiver"));
    this->MFlagEventReceiver = CreateDefaultSubobject<UFlagEventReceiveComponent>(TEXT("FlagEventReceiver"));
    this->MLoadControlComponent = CreateDefaultSubobject<ULoadControlActorComponent>(TEXT("LoadControlComponent"));
    this->MDefaultGeneratePoint = NULL;
    this->MCreatedActor = NULL;
    this->MHiddenInGame = false;
    this->MIsLockedTransformUpdate = false;
    this->bIsPendingDestory = false;
    this->MMovingReservation = false;
}

void AGeneratorBase::SetGenerateObjectVisibility(bool InIsVisible) {
}

void AGeneratorBase::RequestObject() {
}

void AGeneratorBase::RequestDestroyObject() {
}


void AGeneratorBase::OnQuestSectionChangeEnd(FQuestReceiveParamQuestSectionChanged InSectionChangedParam) {
}

void AGeneratorBase::OnQuestSectionChangeBegin(FQuestReceiveParamQuestSectionChanged InSectionChangedParam) {
}




void AGeneratorBase::OnFlagChanged(const FFlagChangedEventParam& InParam) {
}



bool AGeneratorBase::IsCreateActorLoading() const {
    return false;
}

TSoftClassPtr<AActor> AGeneratorBase::GetCreateObjectSoftPtr_Implementation() const {
    return NULL;
}

AActor* AGeneratorBase::GetCreatedActor() const {
    return NULL;
}

bool AGeneratorBase::CheckGenerateCondition() {
    return false;
}


