#include "GimmickManagerBase.h"
#include "ActorVisibilityController.h"
#include "EManagerID.h"

AGimmickManagerBase::AGimmickManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_GIMMICK;
    this->VisibilityController = CreateDefaultSubobject<UActorVisibilityController>(TEXT("VisibilityController"));
}


