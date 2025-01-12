#include "G01SpellInstituteManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01SpellInstituteManagerAccessor::UG01SpellInstituteManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_SPELLINSTITUTE;
}

void UG01SpellInstituteManagerAccessor::RequestOpenSpellInstitute(AActor* InRequestActor) {
}

void UG01SpellInstituteManagerAccessor::GetDevelopSpellParameter(const FName InSpellID, FG01DevelopSpellParameterStruct& ReDevelopSpellParam) {
}


