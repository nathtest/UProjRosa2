#include "G01LearnArtsManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01LearnArtsManager::AG01LearnArtsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_LEARNARTS;
    this->ArtsDataAsset = NULL;
}

void AG01LearnArtsManager::UpdateRegisterLearnArts() {
}

void AG01LearnArtsManager::TryCountAchievement(FName InArtsID, bool InCallNotify) {
}

void AG01LearnArtsManager::AddLearnArts(const FG01PartyLearnArtsStruct& InLearnArts) {
}


