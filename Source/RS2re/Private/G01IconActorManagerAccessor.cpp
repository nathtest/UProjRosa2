#include "G01IconActorManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01IconActorManagerAccessor::UG01IconActorManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_ICONACTOR;
}

void UG01IconActorManagerAccessor::FindIconActorByRoomID(FRoomID InRoomId, TArray<AIconObjectBase*>& OutIconActorList, TArray<AIconObjectBase*>& InRoomActor) {
}


