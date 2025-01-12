#include "AttachPositionComponent.h"

UAttachPositionComponent::UAttachPositionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UChildAttachPositionComponentBase* UAttachPositionComponent::GetPositionComponent(EPositionComponentType InType, int32 InIndex) const {
    return NULL;
}


