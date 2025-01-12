#include "StaffRollManager.h"
#include "EManagerID.h"

AStaffRollManager::AStaffRollManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_STAFFROLL;
}


