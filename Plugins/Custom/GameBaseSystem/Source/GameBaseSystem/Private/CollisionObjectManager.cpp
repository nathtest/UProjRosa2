#include "CollisionObjectManager.h"
#include "EManagerID.h"

ACollisionObjectManager::ACollisionObjectManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_COLLISIONOBJ;
}

void ACollisionObjectManager::Notify_AnyCollisionObjectOverlap(const FCollisionObjOverlapParam& InOverlapParam) {
}


