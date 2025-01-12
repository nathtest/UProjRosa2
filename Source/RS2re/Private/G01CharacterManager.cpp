#include "G01CharacterManager.h"

AG01CharacterManager::AG01CharacterManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MPartyCharactorMinimalInfoTable = NULL;
    this->MEnemyCharactorMinimalInfoTable = NULL;
    this->PartyCharacterVisualInfoTable = NULL;
    this->EnemyCharacterVisualInfoTable = NULL;
    this->CharacterVariationInfoTable = NULL;
}


