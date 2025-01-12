#include "G01EventObjectManager.h"
#include "G01RoomManagerAccessor.h"

AG01EventObjectManager::AG01EventObjectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RoomManagerAccessor = CreateDefaultSubobject<UG01RoomManagerAccessor>(TEXT("RoomManagerAccessor"));
}


