#include "G01QuestManager.h"
#include "G01DestinationManagerAccessor.h"
#include "G01GameSystemDataManagerAccessor.h"
#include "G01PartyManagerAccessor.h"
#include "G01RoomManagerAccessor.h"
#include "G01SaveDataManagerAccessor.h"

AG01QuestManager::AG01QuestManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDestinationAccessor = CreateDefaultSubobject<UG01DestinationManagerAccessor>(TEXT("DestinationAccessor"));
    this->SaveDataManagerAccessor = CreateDefaultSubobject<UG01SaveDataManagerAccessor>(TEXT("SaveDataManagerAccessor"));
    this->RoomManagerAccessor = CreateDefaultSubobject<UG01RoomManagerAccessor>(TEXT("RoomManagerAccessor"));
    this->GameSystemDataManagerAccessor = CreateDefaultSubobject<UG01GameSystemDataManagerAccessor>(TEXT("GameSystemDataManagerAccessor"));
    this->PartyManagerAccessor = CreateDefaultSubobject<UG01PartyManagerAccessor>(TEXT("PartyManagerAccessor"));
    this->BrutusQuestSettingTable = NULL;
    this->bIsEnableAllQuestDestination = false;
    this->DevelopmentNotifyBoostCount = 2;
    this->bIsRequestAutoSave = false;
    this->bIsWaitExecuteAutoSave = false;
}


