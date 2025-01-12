#include "G01BattleCommandManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID
#include "G01BattleArtsManagerAccessor.h"
#include "G01BattleManagerAccessor.h"
#include "G01PartyManagerAccessor.h"

AG01BattleCommandManager::AG01BattleCommandManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_BATTLECMD;
    this->MBattleManagerAccessor = CreateDefaultSubobject<UG01BattleManagerAccessor>(TEXT("BattleManagerAccessor"));
    this->MBattleArtsManagerAccessor = CreateDefaultSubobject<UG01BattleArtsManagerAccessor>(TEXT("BattleArtsManagerAccessor"));
    this->PartyManagerAccessor = CreateDefaultSubobject<UG01PartyManagerAccessor>(TEXT("PartyManagerAccessor"));
    this->MTargetCollision = NULL;
    this->MCommandSetting = NULL;
    this->CurrentCommandIndex = 0;
    this->MCurrentCommandCharacter = NULL;
}

void AG01BattleCommandManager::SortByFaster(TArray<FG01BattleCommandUnit>& InCommandList) {
}

void AG01BattleCommandManager::PredicateSortByFaster_Implementation(const FG01BattleCommandUnit& InA, const FG01BattleCommandUnit& InB, bool& ReAIsFaster) {
}



