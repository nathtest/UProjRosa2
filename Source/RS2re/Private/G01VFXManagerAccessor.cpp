#include "G01VFXManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01VFXManagerAccessor::UG01VFXManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_VFXSYSTEM;
}

void UG01VFXManagerAccessor::FindVFXData(const FVFXID& InVFXID, FVFXDataRow& ReDataRow) {
}

void UG01VFXManagerAccessor::CreateVFXActor(FName InVFXID, int32& OutActorNumber, FString& OutActorName) {
}


