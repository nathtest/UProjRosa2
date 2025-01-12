#include "GimmickObjectBase.h"
#include "GimmickManagerAccessor.h"
#include "InteractIconPositionComponent.h"
#include "PlayerManagerAccessCompo.h"
#include "RoomInfoComponent.h"

AGimmickObjectBase::AGimmickObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MRoomInfoComponent = CreateDefaultSubobject<URoomInfoComponent>(TEXT("RoomInfoComponent"));
    this->MInteractIconPositionComponent = CreateDefaultSubobject<UInteractIconPositionComponent>(TEXT("InteractIconPositionComponent"));
    this->MGimmickManagerAccessor = CreateDefaultSubobject<UGimmickManagerAccessor>(TEXT("GimmickManagerAccessComp"));
    this->MPlayerManager = CreateDefaultSubobject<UPlayerManagerAccessCompo>(TEXT("PlayerManagerAccessCompo"));
    this->DefaultInteractEnable = true;
    this->MInteractIconPositionComponent->SetupAttachment(RootComponent);
}

void AGimmickObjectBase::OnPreTeleport_Implementation() {
}

void AGimmickObjectBase::OnPostTeleport_Implementation() {
}


void AGimmickObjectBase::OnInitialize() {
}

void AGimmickObjectBase::OnEndGimmickEvent_Implementation() {
}


bool AGimmickObjectBase::IsPlayerInFrontOfGimmick() {
    return false;
}

void AGimmickObjectBase::InitParamater_Implementation() {
}

void AGimmickObjectBase::HitInteractMovement_Implementation() {
}

FRoomID AGimmickObjectBase::GetRoomID() const {
    return FRoomID{};
}

bool AGimmickObjectBase::CheckEnable() const {
    return false;
}


