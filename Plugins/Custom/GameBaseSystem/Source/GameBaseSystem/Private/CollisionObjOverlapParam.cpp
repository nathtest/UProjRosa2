#include "CollisionObjOverlapParam.h"

FCollisionObjOverlapParam::FCollisionObjOverlapParam() {
    this->MOverlapType = ECollisionObjOverlapType::BeginOverlap;
    this->MOverlappedCollisionObject = NULL;
    this->MOverlappedComponent = NULL;
    this->MOtherActor = NULL;
    this->MOtherComponent = NULL;
}

