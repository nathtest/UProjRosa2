#include "G01TeacherManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01TeacherManagerAccessor::UG01TeacherManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_TEACHER;
}

void UG01TeacherManagerAccessor::GetGameEffect(FG01GameEffectFlagIDStruct InFlagID, TMap<FName, float>& OutEffect, bool& OutIsValid) {
}


