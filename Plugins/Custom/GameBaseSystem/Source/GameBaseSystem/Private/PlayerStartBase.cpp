#include "PlayerStartBase.h"
#include "RoomInfoComponent.h"

APlayerStartBase::APlayerStartBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MRoomInfoComponent = CreateDefaultSubobject<URoomInfoComponent>(TEXT("RoomInfoComponent"));
    this->IsEnableTraceGround = false;
}


