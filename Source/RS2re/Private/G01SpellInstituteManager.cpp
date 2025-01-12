#include "G01SpellInstituteManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01SpellInstituteManager::AG01SpellInstituteManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_SPELLINSTITUTE;
    this->MDevelopSpellParameterTable = NULL;
}


