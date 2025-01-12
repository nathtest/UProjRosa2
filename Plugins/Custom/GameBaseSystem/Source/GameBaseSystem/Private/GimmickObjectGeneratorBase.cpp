#include "GimmickObjectGeneratorBase.h"
#include "GimmickGenManagerAccessComponent.h"

AGimmickObjectGeneratorBase::AGimmickObjectGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MGimmickGenManagerAccessor = CreateDefaultSubobject<UGimmickGenManagerAccessComponent>(TEXT("GimmickGenManagerAccessComp"));
}

AGimmickObjectBase* AGimmickObjectGeneratorBase::GetCreatedGimmickObject() {
    return NULL;
}


