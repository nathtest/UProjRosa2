#include "G01WalletUiController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

AG01WalletUiController::AG01WalletUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::HUD_WALLET;
}

void AG01WalletUiController::SetEventWalletCalcCrown(int32 InValue, bool InIsEnd) {
}

void AG01WalletUiController::SetEventWalletActive(bool InIsActive) {
}




