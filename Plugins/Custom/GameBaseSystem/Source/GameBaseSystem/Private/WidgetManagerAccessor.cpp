#include "WidgetManagerAccessor.h"
#include "EManagerID.h"

UWidgetManagerAccessor::UWidgetManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_WIDGET;
}

void UWidgetManagerAccessor::ReleaseWidget(EWidgetType InWidgetType) {
}

bool UWidgetManagerAccessor::IsActiveWidgetType(EWidgetType InWidgetType) {
    return false;
}

TArray<UGameViewWidget*> UWidgetManagerAccessor::GetWidget(EWidgetType InWidgetType) {
    return TArray<UGameViewWidget*>();
}


