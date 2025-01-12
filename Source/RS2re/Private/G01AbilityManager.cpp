#include "G01AbilityManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01AbilityManager::AG01AbilityManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_ABILITY;
    this->ManagerDataAsset = NULL;
    this->SettingDataAsset = NULL;
    this->DBG_ForceAllOpen = false;
    this->DBG_ForceAllLearn = false;
    this->DBG_ForceAllMastery = false;
    this->DBG_ForceAllActivate = false;
    this->IsGameStart = false;
    this->CurrentOpenLevel = 0;
    this->OpenLevelQuest = NULL;
    this->IsEndSetupAllAbility = false;
    this->IsEndQuestRestore = false;
    this->IsInBattle = false;
}

void AG01AbilityManager::OnAbilityMasteryInBattle(FName InAbilityItemId) {
}

void AG01AbilityManager::OnAbilityLearnInBattle(FName InAbilityItemId) {
}


