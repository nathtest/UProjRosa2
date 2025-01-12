#include "ChildAttachPositionComponentBase.h"

UChildAttachPositionComponentBase::UChildAttachPositionComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MPositionType = EPositionComponentType::PT_NONE;
}

FTransform UChildAttachPositionComponentBase::GetWorldTransform() const {
    return FTransform{};
}


