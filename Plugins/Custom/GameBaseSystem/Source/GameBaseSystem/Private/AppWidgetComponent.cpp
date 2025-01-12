#include "AppWidgetComponent.h"

UAppWidgetComponent::UAppWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AppWidgetClass = NULL;
    this->MaterialInstanceUniqueID = 0;
}


UWidgetAnimation* UAppWidgetComponent::FindAnimation(FName InAnimName) {
    return NULL;
}


