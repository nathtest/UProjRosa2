#include "G01TeacherManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

AG01TeacherManager::AG01TeacherManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_TEACHER;
    this->AcquiredTeacherFlagDataTable = NULL;
    this->TeacherCoefficientDataTable = NULL;
}


