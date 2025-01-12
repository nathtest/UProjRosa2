#include "CollisionObjManagerAccessCompo.h"
#include "EManagerID.h"

UCollisionObjManagerAccessCompo::UCollisionObjManagerAccessCompo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_COLLISIONOBJ;
}


