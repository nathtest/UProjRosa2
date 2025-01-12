#include "UiManager.h"
#include "EManagerID.h"
#include "WidgetManagerAccessor.h"

AUiManager::AUiManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_UI;
    this->MWidgetCreateDataTable = NULL;
    this->MControllerCreateDataTable = NULL;
    this->MWidgetManagerAccessor = CreateDefaultSubobject<UWidgetManagerAccessor>(TEXT("WidgetManagerAccessor"));
}

void AUiManager::SetupControllerCreateData() {
}

AUiController* AUiManager::GetUIController(EUiControllerId InID) {
    return NULL;
}

TArray<AUiController*> AUiManager::GetNotifyActiveUiController(EUiNotify InNotify) {
    return TArray<AUiController*>();
}


