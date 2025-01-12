#include "G01ClearAreaManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01ClearAreaManagerAccessor::UG01ClearAreaManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_CLEARAREA;
}

void UG01ClearAreaManagerAccessor::RequestClearAreaSequence(EG01AreaId ClearAreaID) {
}


