#include "SimpleActorGeneratorManagerBase.h"
#include "EManagerID.h"

ASimpleActorGeneratorManagerBase::ASimpleActorGeneratorManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_ACTOR_GEN;
}


