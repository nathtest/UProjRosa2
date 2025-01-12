#include "G01BlackSmithManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01BlackSmithManagerAccessor::UG01BlackSmithManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_BLACKSMITH;
}

void UG01BlackSmithManagerAccessor::RequestBlackSmith(AActor* Actor, bool IsFirst) {
}


