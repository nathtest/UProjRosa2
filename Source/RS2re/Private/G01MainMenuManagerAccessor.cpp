#include "G01MainMenuManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01MainMenuManagerAccessor::UG01MainMenuManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_MAINMENU;
}

void UG01MainMenuManagerAccessor::RequestTeacherMenu() {
}


