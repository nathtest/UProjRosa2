#include "G01WalletUiControllerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

UG01WalletUiControllerAccessor::UG01WalletUiControllerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::HUD_WALLET;
}

void UG01WalletUiControllerAccessor::SetEventWalletCalcCrown(int32 InValue, bool InIsEnd) {
}

void UG01WalletUiControllerAccessor::SetEventWalletActive(bool InIsActive) {
}


