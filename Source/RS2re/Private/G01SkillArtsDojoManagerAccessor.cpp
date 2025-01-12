#include "G01SkillArtsDojoManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01SkillArtsDojoManagerAccessor::UG01SkillArtsDojoManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_SKILLARTSDOJO;
}

void UG01SkillArtsDojoManagerAccessor::RequestOpenSkillArtsDojo(AActor* InRequestActor) {
}


