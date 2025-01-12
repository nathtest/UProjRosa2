#include "G01SimpleActorGeneratorBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=RoomInfoComponent -FallbackName=RoomInfoComponent
#include "G01RoomManagerAccessor.h"

AG01SimpleActorGeneratorBase::AG01SimpleActorGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomManagerAccessor = CreateDefaultSubobject<UG01RoomManagerAccessor>(TEXT("RoomManagerAccessor"));
    this->RoomInfoComponent = CreateDefaultSubobject<URoomInfoComponent>(TEXT("RoomInfoComponent"));
}


