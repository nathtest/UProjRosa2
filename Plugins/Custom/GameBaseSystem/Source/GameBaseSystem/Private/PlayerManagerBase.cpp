#include "PlayerManagerBase.h"
#include "EManagerID.h"
#include "StreamingManagerAccessComponent.h"

APlayerManagerBase::APlayerManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_PLAYER;
    this->MStreamingManagerAccessCompo = CreateDefaultSubobject<UStreamingManagerAccessComponent>(TEXT("StreamingManagerAccessCompo"));
    this->bIsShowTeleportLandingRaycast = false;
    this->LandingRaycastDisplayTime = 30.00f;
}

void APlayerManagerBase::SetBeginPlayerStartTag(FName InPlayerStartTag) {
}

void APlayerManagerBase::ResetPlayerCameraRotation() {
}

void APlayerManagerBase::OnDestroyedVisibilityRegister(AActor* InActor) {
}


ACharacter* APlayerManagerBase::GetPlayerCharacter(int32 InPlayerControllerIndex) const {
    return NULL;
}






