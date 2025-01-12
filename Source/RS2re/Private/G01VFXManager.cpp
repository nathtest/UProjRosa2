#include "G01VFXManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LoadControlActorComponent -FallbackName=LoadControlActorComponent

AG01VFXManager::AG01VFXManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MVFXLoadController = CreateDefaultSubobject<ULoadControlActorComponent>(TEXT("VFXLoadController"));
    this->MRequestCount = -1;
    this->MVFXDataTable = NULL;
}

bool AG01VFXManager::StopVFX(UG01VFXHandle* InVFXHandle) {
    return false;
}

bool AG01VFXManager::PlayVFX(UG01VFXHandle* InVFXHandle, const TArray<AActor*>& InOwnActorArray, const TArray<AActor*>& InOpponentActorArray, const FG01VFXAppendInfo& InVFXAppendInfo) {
    return false;
}

bool AG01VFXManager::IsVFXResourceReady(FVFXID InVFXID, int32 InVFXRank) {
    return false;
}

bool AG01VFXManager::DestroyVFXActor(UG01VFXHandle* InVFXHandle) {
    return false;
}

void AG01VFXManager::DestroyHandle(UG01VFXHandle* InVFXHandle) {
}

bool AG01VFXManager::CreateVFXActor(UG01VFXHandle* InVFXHandle) {
    return false;
}


