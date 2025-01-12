#include "G01MsgSimpleUiController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EUiControllerId -FallbackName=EUiControllerId

AG01MsgSimpleUiController::AG01MsgSimpleUiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MUiControllerId = EUiControllerId::MSG_SIMPLE;
    this->MMaxCreateNum = 0;
    this->MIsInBattle = false;
    this->MIsInSequence = false;
}



void AG01MsgSimpleUiController::SetMaxCreateNum(int32 InMaxCreateNum) {
}



