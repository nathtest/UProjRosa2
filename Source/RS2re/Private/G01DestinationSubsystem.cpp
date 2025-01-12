#include "G01DestinationSubsystem.h"

UG01DestinationSubsystem::UG01DestinationSubsystem() {
    this->bIsParallelUpdate = true;
}

bool UG01DestinationSubsystem::UpdateDetailInfo(FName InKey) {
    return false;
}

void UG01DestinationSubsystem::UpdateDestinationInfo(FName InKey, const FG01DestinationInfo& InDest) {
}

void UG01DestinationSubsystem::UpdateBroadcast(FName InKey, bool InIsUpdateDetail) {
}

void UG01DestinationSubsystem::SetDestinationPriority(FName InKey, int32 InPriority) {
}

void UG01DestinationSubsystem::RemoveDestinationInfo(FName InKey) {
}

void UG01DestinationSubsystem::RemoveBroadcast(const FG01DestinationInfos& InInfo) {
}

TArray<FG01DestinationInfos> UG01DestinationSubsystem::GetDestinationList() const {
    return TArray<FG01DestinationInfos>();
}

void UG01DestinationSubsystem::FindDestinationData(FName InKey, bool& ReIsFound, FG01DestinationData& ReData) {
}

void UG01DestinationSubsystem::DestroyCheckDestinationActor(const FLevelObjectID& InLevelObjectID, AActor* InActor) {
}

void UG01DestinationSubsystem::CreateCheckDestinationActor(const FLevelObjectID& InLevelObjectID, AActor* InActor) {
}

bool UG01DestinationSubsystem::AddDestinationInfo(FName InKey) {
    return false;
}

void UG01DestinationSubsystem::AddBroadcast(const FName& InKey) {
}


