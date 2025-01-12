#include "PlayerManagerAccessCompo.h"
#include "EManagerID.h"

UPlayerManagerAccessCompo::UPlayerManagerAccessCompo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_PLAYER;
    this->MPlayerManager = NULL;
}

void UPlayerManagerAccessCompo::TeleportToPlayerStartDirect(APlayerStart* InPlayerStart) {
}

void UPlayerManagerAccessCompo::ResetPlayerCameraRotation() {
}

bool UPlayerManagerAccessCompo::HasInputAuthority() {
    return false;
}

APlayerManagerBase* UPlayerManagerAccessCompo::GetPlayerManager() {
    return NULL;
}

ACharacter* UPlayerManagerAccessCompo::GetPlayerCharacter(int32 InPlayerControllerIndex) const {
    return NULL;
}

void UPlayerManagerAccessCompo::EnableInputPlayerCamera() {
}

void UPlayerManagerAccessCompo::EnableInputPlayer(bool InIsPause) {
}

void UPlayerManagerAccessCompo::DisableInputPlayerCamera() {
}

void UPlayerManagerAccessCompo::DisableInputPlayer(bool InIsPause) {
}


