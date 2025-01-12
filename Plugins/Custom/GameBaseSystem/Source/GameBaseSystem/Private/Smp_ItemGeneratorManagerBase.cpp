#include "Smp_ItemGeneratorManagerBase.h"
#include "EManagerID.h"

ASmp_ItemGeneratorManagerBase::ASmp_ItemGeneratorManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_ITEM_GEN;
}


