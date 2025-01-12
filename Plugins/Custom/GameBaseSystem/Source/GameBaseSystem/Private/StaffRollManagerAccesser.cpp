#include "StaffRollManagerAccesser.h"
#include "EManagerID.h"

UStaffRollManagerAccesser::UStaffRollManagerAccesser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_STAFFROLL;
}

bool UStaffRollManagerAccesser::IsActiveStaffRoll() {
    return false;
}


