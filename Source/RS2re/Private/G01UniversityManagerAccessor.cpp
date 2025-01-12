#include "G01UniversityManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01UniversityManagerAccessor::UG01UniversityManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_UNIVERSITY;
}

void UG01UniversityManagerAccessor::RequestUniversityMenu(AActor* Actor) {
}

void UG01UniversityManagerAccessor::RequestFirstTest() {
}


