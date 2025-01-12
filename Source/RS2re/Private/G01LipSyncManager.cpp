#include "G01LipSyncManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
#include "G01VoiceManagerAccessor.h"

AG01LipSyncManager::AG01LipSyncManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_LIPSYNC;
    this->LipAnimTable = NULL;
    this->GeneralLipAnimTable = NULL;
    this->VoiceManagerAccessor = CreateDefaultSubobject<UG01VoiceManagerAccessor>(TEXT("VoiceManagerAccessor"));
}


