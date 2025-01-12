#include "CollisionObjectBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderComponent -FallbackName=TextRenderComponent
#include "CollisionObjManagerAccessCompo.h"
#include "FlagEventReceiveComponent.h"
#include "QuestEventReceiveComponent.h"
#include "QuestManagerAccessComponent.h"

ACollisionObjectBase::ACollisionObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MCollisionObjectManagerAccessor = CreateDefaultSubobject<UCollisionObjManagerAccessCompo>(TEXT("CollisionObjectManagerAccessor"));
    this->MQuestManagerAccessor = CreateDefaultSubobject<UQuestManagerAccessComponent>(TEXT("QuestManagerAccessor"));
    this->MQuestEventReceiver = CreateDefaultSubobject<UQuestEventReceiveComponent>(TEXT("QuestEventReceiver"));
    this->MFlagEventReceiver = CreateDefaultSubobject<UFlagEventReceiveComponent>(TEXT("FlagEventReceiver"));
    this->MIsCreatedByGenerator = false;
    this->MCollisionNameRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("CollisionNameRender"));
    //this->MCollisionNameRender->SetupAttachment(RootComponent);
}

void ACollisionObjectBase::SetupCollisionName(const FString& InPrefix, const FString& InDisplayName) {
}

void ACollisionObjectBase::OnQuestSectionChangeEnd(FQuestReceiveParamQuestSectionChanged InSectionChangedParam) {
}

void ACollisionObjectBase::OnQuestSectionChangeBegin(FQuestReceiveParamQuestSectionChanged InSectionChangedParam) {
}

void ACollisionObjectBase::OnPreEventCreate_Implementation(const FInteractHitCreateEventInfo& InHitCreateEventInfo, FInteractHitCreateEventInfo& OutHitCreateEventInfo) {
}

void ACollisionObjectBase::OnFlagChanged(const FFlagChangedEventParam& InParam) {
}

void ACollisionObjectBase::OnEventEnd(const FEventResult& InEndResult) {
}


