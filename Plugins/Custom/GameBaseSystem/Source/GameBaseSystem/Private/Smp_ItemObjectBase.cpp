#include "Smp_ItemObjectBase.h"

ASmp_ItemObjectBase::ASmp_ItemObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDropItemNum = 1;
}

FName ASmp_ItemObjectBase::GetItemId() {
    return NAME_None;
}


