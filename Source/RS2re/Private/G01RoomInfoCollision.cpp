#include "G01RoomInfoCollision.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomInfoComponent -FallbackName=RoomInfoComponent

AG01RoomInfoCollision::AG01RoomInfoCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomInfoComponent = CreateDefaultSubobject<URoomInfoComponent>(TEXT("RoomInfoComponent"));
}


