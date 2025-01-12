#include "ItemGenManagerAccessCompo.h"
#include "EManagerID.h"

UItemGenManagerAccessCompo::UItemGenManagerAccessCompo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_ITEM_GEN;
}


