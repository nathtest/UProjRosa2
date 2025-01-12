#include "ManagerAccessor.h"

UManagerAccessor::UManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_DEBUG;
    this->MManager = NULL;
}

bool UManagerAccessor::IsUse() const {
    return false;
}

AManagerBase* UManagerAccessor::GetManagerOnManagerID(EManagerID InManagerId) const {
    return NULL;
}

AManagerBase* UManagerAccessor::GetDefaultManager() const {
    return NULL;
}


