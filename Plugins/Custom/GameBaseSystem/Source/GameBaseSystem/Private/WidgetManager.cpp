#include "WidgetManager.h"
#include "EManagerID.h"

AWidgetManager::AWidgetManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_WIDGET;
}


