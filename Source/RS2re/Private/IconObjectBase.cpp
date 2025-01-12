#include "IconObjectBase.h"
#include "G01IconActorManagerAccessor.h"

AIconObjectBase::AIconObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Icontype = EG01IconTypeEnum::BAR;
    this->MIconActorManagerAccessor = CreateDefaultSubobject<UG01IconActorManagerAccessor>(TEXT("IconActorManagerAccessor"));
}

void AIconObjectBase::OnInitialize() {
}

void AIconObjectBase::InitParamater_Implementation() {
}


