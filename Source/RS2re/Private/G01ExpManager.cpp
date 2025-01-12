#include "G01ExpManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01ExpManager::AG01ExpManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_EXP;
}

void AG01ExpManager::ThrowExp() {
}

void AG01ExpManager::ResolveExp() {
}

TArray<EG01BattleArtsType> AG01ExpManager::MakeNeverActedActionLog_Implementation(const FG01CharacterID& InCharacterId, const TArray<EG01BattleArtsType>& InDefaultActionLog, int32 InExp) {
    return TArray<EG01BattleArtsType>();
}

int32 AG01ExpManager::GetNeverActedExp_Implementation(int32 InDefaultExp) {
    return 0;
}


