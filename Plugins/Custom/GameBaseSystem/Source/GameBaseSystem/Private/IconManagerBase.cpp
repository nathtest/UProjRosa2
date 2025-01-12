#include "IconManagerBase.h"
#include "EManagerID.h"

AIconManagerBase::AIconManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_ICON;
}

void AIconManagerBase::RequestDrawIcon(FTransform InTransform, EIcnoEnum InIconEnum) {
}

void AIconManagerBase::ReMoveDrawIcon(EIcnoEnum InIconEnum) {
}


