#include "G01SaveLoadManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01SaveLoadManagerAccessor::UG01SaveLoadManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_SAVELOAD;
}

void UG01SaveLoadManagerAccessor::RequestSave() {
}

void UG01SaveLoadManagerAccessor::RequestReturnToTitleSave() {
}

void UG01SaveLoadManagerAccessor::RequestLoad() {
}

void UG01SaveLoadManagerAccessor::Close() {
}


