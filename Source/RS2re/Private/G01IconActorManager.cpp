#include "G01IconActorManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
#include "G01RoomManagerAccessor.h"

AG01IconActorManager::AG01IconActorManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_ICONACTOR;
    this->MRoomManagerAccessor = CreateDefaultSubobject<UG01RoomManagerAccessor>(TEXT("RoomManagerAccessor"));
}


