#include "GameLevelManager.h"
#include "EManagerID.h"

AGameLevelManager::AGameLevelManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_GAMELEVEL;
}

void AGameLevelManager::SubLevelStatusUpdate() {
}

bool AGameLevelManager::IsSubLevelLoaded(int32 InIndex) {
    return false;
}

bool AGameLevelManager::IsIgnoreSubLevelName(FName InLevelName) {
    return false;
}

bool AGameLevelManager::IsAllSubLevelLoaded() {
    return false;
}

int32 AGameLevelManager::GetSubLevelNum() {
    return 0;
}

FName AGameLevelManager::GetSubLevelName(int32 InIndex) {
    return NAME_None;
}

void AGameLevelManager::GetSubLevelLoadedCount(bool InIsUpdate, int32& ReSubLevelCount, int32& ReLoadedCount, FString& ReNotYet) {
}




