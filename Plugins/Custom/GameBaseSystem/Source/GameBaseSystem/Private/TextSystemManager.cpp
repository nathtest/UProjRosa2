#include "TextSystemManager.h"
#include "EManagerID.h"

ATextSystemManager::ATextSystemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MManagerID = EManagerID::MGR_ID_TEXTSYSTEM;
}

FString ATextSystemManager::GetPropID_Default(const FTextTagPropertyParam& InTagPropParam) const {
    return TEXT("");
}


