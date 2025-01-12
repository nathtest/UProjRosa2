#include "G01UniversityManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01UniversityManager::AG01UniversityManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_UNIVERSITY;
    this->MImperialExamDataTable = NULL;
    this->MTestSettingDataTable = NULL;
    this->MExamTestDataTable = NULL;
}


