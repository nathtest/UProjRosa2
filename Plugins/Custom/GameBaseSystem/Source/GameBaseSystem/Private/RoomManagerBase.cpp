#include "RoomManagerBase.h"
#include "EManagerID.h"

ARoomManagerBase::ARoomManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_ROOM;
}


