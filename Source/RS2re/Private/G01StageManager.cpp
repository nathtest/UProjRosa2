#include "G01StageManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01StageManager::AG01StageManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_STAGE;
    this->StageParamTable = NULL;
    this->RegionParamTable = NULL;
    this->PhysicalMaterialInfoTable = NULL;
    this->MCustomDestDispClassMapCollision = NULL;
}


