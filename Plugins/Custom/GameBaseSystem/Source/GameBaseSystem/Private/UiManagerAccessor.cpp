#include "UiManagerAccessor.h"
#include "EManagerID.h"

UUiManagerAccessor::UUiManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_UI;
}

AUiController* UUiManagerAccessor::GetUIController(EUiControllerId InUIControllerID) {
    return NULL;
}


