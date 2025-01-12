#include "G01TutorialManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01TutorialManagerAccessor::UG01TutorialManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_TUTORIAL;
}

void UG01TutorialManagerAccessor::RequestTutorial(FG01TutorialID InTutorialId, bool InIsForceListIn) {
}

void UG01TutorialManagerAccessor::IsChecked(FG01TutorialID InTutorialId, bool& OutIsChecked) {
}


