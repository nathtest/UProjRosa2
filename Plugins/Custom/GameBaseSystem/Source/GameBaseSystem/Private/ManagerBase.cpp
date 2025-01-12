#include "ManagerBase.h"
#include "LoadControlActorComponent.h"

AManagerBase::AManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MLoadControlComponent = CreateDefaultSubobject<ULoadControlActorComponent>(TEXT("LoadController"));
    this->MHaveLoadAssetOnBeginPlay = false;
    this->MManagerID = EManagerID::MGR_ID_NONE;
}

void AManagerBase::SetIsHardCreate(bool InIsHardCreate) {
}





void AManagerBase::ObjectLoadCompleted() {
}

EManagerID AManagerBase::GetManagerID() const {
    return EManagerID::MGR_ID_DEBUG;
}

void AManagerBase::AddInitializeAsyncObjects(const TArray<TSoftClassPtr<UObject>>& InObjects) {
}

void AManagerBase::AddInitializeAsyncObject(TSoftClassPtr<UObject> InObject) {
}


