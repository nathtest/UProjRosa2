#include "G01CharacterBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
#include "RelativePositionComponent.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RelativePositionComponent -FallbackName=RelativePositionComponent
#include "RoomInfoComponent.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomInfoComponent -FallbackName=RoomInfoComponent
#include "G01MsgRootComponent.h"
#include "G01MsgWindowComponent.h"

AG01CharacterBase::AG01CharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //this->MRoomInfoComponent = CreateDefaultSubobject<URoomInfoComponent>(TEXT("RoomInfoComponent"));
    this->MDefaultAIState = EAIState::AI_IDLE;
    this->IsTurn = false;
    this->IsEnableGaze = false;
    //this->MMessageRootComponent = CreateDefaultSubobject<UG01MsgRootComponent>(TEXT("MessageRootComponent"));
    //this->MSimpleTalkPosition = CreateDefaultSubobject<URelativePositionComponent>(TEXT("SimpleTalkPosition"));
    //this->MMsgWindowComponent = CreateDefaultSubobject<UG01MsgWindowComponent>(TEXT("MsgWindowComponent"));
    //this->MRoomCollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RoomCollisionComponent"));
    this->MRotationInterpSpeed = 0.00f;
    this->IsEnableUniqueAnim = true;
    this->FieldVisualDataAsset = NULL;
    //this->MMessageRootComponent->SetupAttachment(MAttachPositionRoot);
    //this->MSimpleTalkPosition->SetupAttachment(MMessageRootComponent);
    //this->MMsgWindowComponent->SetupAttachment(MMessageRootComponent);
    //this->MRoomCollisionComponent->SetupAttachment(MAttachPositionRoot);
}

void AG01CharacterBase::SetNameJA(FName InName) {
}

void AG01CharacterBase::SetHiddenInGame_Implementation(bool InNewHidden) {
}

void AG01CharacterBase::SetEnableGaze(bool InEnable) {
}

TSoftObjectPtr<UG01FieldVisualDataAsset> AG01CharacterBase::GetVisualAssetData() const {
    return NULL;
}

UClass* AG01CharacterBase::GetVisualActorClass() const {
    return NULL;
}

float AG01CharacterBase::GetRotationInterpSpeed() {
    return 0.0f;
}

USphereComponent* AG01CharacterBase::GetRoomCollisionComponent() const {
    return NULL;
}

FText AG01CharacterBase::GetNameText() const {
    return FText::GetEmpty();
}

FName AG01CharacterBase::GetNameJP() const {
    return NAME_None;
}

FName AG01CharacterBase::GetNameJA() {
    return NAME_None;
}

FName AG01CharacterBase::GetName() const {
    return NAME_None;
}

float AG01CharacterBase::GetMoveSpeedByCharacter(EAISpeed InSpeedID) {
    return 0.0f;
}

bool AG01CharacterBase::GetEnableGaze() {
    return false;
}

FG01CharacterID AG01CharacterBase::GetCharacterID() const {
    return FG01CharacterID{};
}

void AG01CharacterBase::EnableInteractCollision() {
}


