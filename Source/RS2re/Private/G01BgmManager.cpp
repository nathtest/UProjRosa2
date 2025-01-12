#include "G01BgmManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01BgmManager::AG01BgmManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_BGM;
    this->MBgmDataTable = NULL;
    this->MDefaultMasterVolume = 0.00f;
}

void AG01BgmManager::AddLogPlayBGM_Implementation(const FG01BgmRequest& InRequest) {
}


