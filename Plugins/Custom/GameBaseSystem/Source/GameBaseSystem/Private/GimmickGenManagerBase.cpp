#include "GimmickGenManagerBase.h"
#include "EManagerID.h"

AGimmickGenManagerBase::AGimmickGenManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_GIMMICK_GEN;
}


