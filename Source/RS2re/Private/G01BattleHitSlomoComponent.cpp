#include "G01BattleHitSlomoComponent.h"

UG01BattleHitSlomoComponent::UG01BattleHitSlomoComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsRequestAccepted = false;
    this->IsInDelay = false;
    this->IsInSlomo = false;
    this->DelaySec = -1.00f;
    this->DurationSec = -1.00f;
    this->SlomoRate = -1.00f;
}

void UG01BattleHitSlomoComponent::ReserveHitSlomo(FName InReserveId) {
}

void UG01BattleHitSlomoComponent::RequestHitSlomo(int32 InDelayFrame, int32 InDurationFrame, float InSlomoRate) {
}

void UG01BattleHitSlomoComponent::HasReserve(bool& OutHas) {
}

void UG01BattleHitSlomoComponent::GetReserveList(TArray<FName>& OutList) {
}

void UG01BattleHitSlomoComponent::ClearReserve() {
}


