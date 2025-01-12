#include "G01CeaseReturnFromBattleBTService.h"

UG01CeaseReturnFromBattleBTService::UG01CeaseReturnFromBattleBTService() {
    this->NodeName = TEXT("Cease Return From Battle");
    this->CollisionChannel = ECC_GameTraceChannel3;
    this->EnableCollision = true;
    this->ChangeType = EChangeCollisionType::Tag;
    this->ComponentTag = TEXT("Default");
}


