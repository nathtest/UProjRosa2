#include "WindManagerAccessor.h"
#include "EManagerID.h"

UWindManagerAccessor::UWindManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_WIND;
}


