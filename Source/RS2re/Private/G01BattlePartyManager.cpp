#include "G01BattlePartyManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01BattlePartyManager::AG01BattlePartyManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_BATTLEPARTY;
    this->BattlePartyDataAsset = NULL;
    this->SortingType = EBattlePartyCommandListType::DEFAULT;
    this->IsNeedOpenAllSkillUnit = false;
}

void AG01BattlePartyManager::FindBattleParty(FName InRowName, bool& OutFound, FG01BattlePartyTableRow& OutRow) {
}


