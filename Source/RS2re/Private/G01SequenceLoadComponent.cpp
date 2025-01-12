#include "G01SequenceLoadComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ObserverSubjectComponent -FallbackName=ObserverSubjectComponent
#include "G01BattleArtsManagerAccessor.h"
#include "G01ItemManagerAccessor.h"
#include "G01LipSyncManagerAccessor.h"
#include "G01PartyManagerAccessor.h"
#include "G01RoomManagerAccessor.h"
#include "G01VoiceManagerAccessor.h"

UG01SequenceLoadComponent::UG01SequenceLoadComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObserverSubject = CreateDefaultSubobject<UObserverSubjectComponent>(TEXT("ObserverSubject"));
    this->RoomManagerAccessor = CreateDefaultSubobject<UG01RoomManagerAccessor>(TEXT("RoomManagerAccessor"));
    this->LipSyncManagerAccessor = CreateDefaultSubobject<UG01LipSyncManagerAccessor>(TEXT("LipSyncManagerAccessor"));
    this->VoiceManagerAccessor = CreateDefaultSubobject<UG01VoiceManagerAccessor>(TEXT("VoiceManagerAccessor"));
    this->PartyManagerAccessor = CreateDefaultSubobject<UG01PartyManagerAccessor>(TEXT("PartyManagerAccessor"));
    this->ItemManagerAccessor = CreateDefaultSubobject<UG01ItemManagerAccessor>(TEXT("ItemManagerAccessor"));
    this->VisualActorCommonSettings = NULL;
    this->CharacterSettings = NULL;
    this->MArtsManagerAccessor = CreateDefaultSubobject<UG01BattleArtsManagerAccessor>(TEXT("ArtsManagerAccessor"));
}

void UG01SequenceLoadComponent::OnVoiceLoadCompleted(const FG01VoiceLoadInfo& InInfo) {
}

void UG01SequenceLoadComponent::OnLoadCompletedVFX(int32 InRequestIndex) {
}

void UG01SequenceLoadComponent::OnLoadCompletedFX(int32 InRequestIndex) {
}

void UG01SequenceLoadComponent::OnLipAnimLoadCompleted(const FG01LipSyncLoadedRessources& InResource) {
}

void UG01SequenceLoadComponent::OnGeneralLipAnimLoadCompleted(const FG01LipSyncLoadedRessources& InResource) {
}


