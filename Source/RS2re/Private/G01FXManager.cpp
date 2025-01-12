#include "G01FXManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=LoadControlActorComponent -FallbackName=LoadControlActorComponent

AG01FXManager::AG01FXManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MFxLoadController = CreateDefaultSubobject<ULoadControlActorComponent>(TEXT("FxLoadController"));
    this->MRequestCount = -1;
    this->MFXDataTable = NULL;
    this->MFXPlayArgsTable = NULL;
}

bool AG01FXManager::StopFX(UG01FXHandle* InFxHandle) {
    return false;
}

bool AG01FXManager::PlayFX(UG01FXHandle* InFxHandle, const TArray<FG01FXPointInfo>& InBasePointInfo, const TArray<FG01FXPointInfo>& InTargetPointInfo, const FG01FXAppendInfo& InFxAppendInfo) {
    return false;
}

bool AG01FXManager::IsFXResourceReady(FEffectID InFXID) {
    return false;
}

void AG01FXManager::DestroyHandle(UG01FXHandle* InHandle) {
}

bool AG01FXManager::DestroyFXActor(UG01FXHandle* InFxHandle) {
    return false;
}

bool AG01FXManager::CreateFXActor(UG01FXHandle* InFxHandle) {
    return false;
}


