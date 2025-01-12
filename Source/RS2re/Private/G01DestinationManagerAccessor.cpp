#include "G01DestinationManagerAccessor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EManagerID -FallbackName=EManagerID

UG01DestinationManagerAccessor::UG01DestinationManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_DESTINATION;
}

void UG01DestinationManagerAccessor::UpdateDestination(FName InKey, const FG01DestinationInfo& InDest) {
}

void UG01DestinationManagerAccessor::UpdateBroadcast(FName InKey) {
}

void UG01DestinationManagerAccessor::SetDestinationPriority(FName InKey, int32 InPriority) {
}

void UG01DestinationManagerAccessor::RemoveDestination(FName InKey) {
}

void UG01DestinationManagerAccessor::GetAllDestinationData(TArray<FG01DestinationInfos>& ReDestinationList) {
}

void UG01DestinationManagerAccessor::FindDestinationData(FName InKey, bool& ReIsFound, FG01DestinationData& ReFoundData) {
}

bool UG01DestinationManagerAccessor::AddDestination(FName InKey) {
    return false;
}


