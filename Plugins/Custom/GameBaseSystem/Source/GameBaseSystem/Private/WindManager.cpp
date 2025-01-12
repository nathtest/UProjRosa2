#include "WindManager.h"
#include "EManagerID.h"

AWindManager::AWindManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_WIND;
    this->CommonSettings = NULL;
    this->WindSource = NULL;
}

void AWindManager::OnDestroyWindController(AActor* InActor) {
}


