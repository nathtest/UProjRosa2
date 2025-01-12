#include "ObjectCharacterManagerBase.h"
#include "EManagerID.h"

AObjectCharacterManagerBase::AObjectCharacterManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_OBJECTCHARA;
}

void AObjectCharacterManagerBase::OnDestroyedActor(AActor* InDestroyActor) {
}


