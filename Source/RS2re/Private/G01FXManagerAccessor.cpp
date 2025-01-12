#include "G01FXManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01FXManagerAccessor::UG01FXManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_FXSYSTEM;
}

void UG01FXManagerAccessor::FindEffectData(const FEffectID& InEffectID, FFXDataRow& ReDataRow) {
}

void UG01FXManagerAccessor::CreateFXActor(FName InFXID, int32& OutActorNumber, FString& OutActorName) {
}


