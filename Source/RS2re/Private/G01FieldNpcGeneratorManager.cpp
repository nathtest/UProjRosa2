#include "G01FieldNpcGeneratorManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01FieldNpcGeneratorManager::AG01FieldNpcGeneratorManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_NPC_GEN;
    this->MFriendNpcParamTable = NULL;
    this->VariationNpcParamTable = NULL;
    this->EnableDither = true;
    this->FollowNpc = NULL;
    this->IsForceHideFollowNpc = false;
    this->EnableDitherStartLength = 200.00f;
    this->EnableDitherEndLength = 100.00f;
}

void AG01FieldNpcGeneratorManager::SetFollowNpcDither(float InRate) {
}

void AG01FieldNpcGeneratorManager::SetAIStateAllNpc(EAIState InAiState) {
}

TArray<AG01FieldNpcBase*> AG01FieldNpcGeneratorManager::GetNpcListByRoomID(FRoomID InRoomId) {
    return TArray<AG01FieldNpcBase*>();
}

TArray<AG01FieldNpcBase*> AG01FieldNpcGeneratorManager::GetNpcList() {
    return TArray<AG01FieldNpcBase*>();
}

TArray<AG01FieldNpcGeneratorBase*> AG01FieldNpcGeneratorManager::GetNpcGeneratorListByRoomID(FRoomID InRoomId) {
    return TArray<AG01FieldNpcGeneratorBase*>();
}

TArray<AG01FieldNpcGeneratorBase*> AG01FieldNpcGeneratorManager::GetNpcGeneratorList() {
    return TArray<AG01FieldNpcGeneratorBase*>();
}

void AG01FieldNpcGeneratorManager::EnableTickNpcGeneratorByRoomID(UG01RoomManagerAccessor* InRoomManagerAccessor, bool InIsDisp) {
}

void AG01FieldNpcGeneratorManager::EnableTickAllNpcGenerator() {
}

void AG01FieldNpcGeneratorManager::DisableTickAllNpc(bool InIsHide) {
}


