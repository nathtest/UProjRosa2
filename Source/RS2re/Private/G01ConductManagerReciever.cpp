#include "G01ConductManagerReciever.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01ConductManagerReciever::UG01ConductManagerReciever(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_CONDUCT;
}

void UG01ConductManagerReciever::Bind(const FOnChangeConduct& InChangeEvent, bool& OutIsSuccess) {
}


