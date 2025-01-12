#include "G01ArtsDelayHitComponent.h"

UG01ArtsDelayHitComponent::UG01ArtsDelayHitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UG01ArtsDelayHitComponent::Unregister(FName InTag) {
}

void UG01ArtsDelayHitComponent::RequestDelayHit(FName InTag, const FG01ArtsDelayHitRequest& InRequest) {
}

void UG01ArtsDelayHitComponent::Register(FName InTag, int32 InMultiCount, UObject* InSubject) {
}

void UG01ArtsDelayHitComponent::ProcessArtsHitNotify(UG01BattleTask* InTask, const TArray<int32>& InTargetNo, int32 InHitNo, const FG01SeqNotifyBattleDamageParam& InParam) {
}

void UG01ArtsDelayHitComponent::MakeRegisteredHitKeyList(TArray<FG01ArtsDelayHitKey>& OutKeyList) {
}

void UG01ArtsDelayHitComponent::IsInDelayHit(bool& OutIsHit) {
}

void UG01ArtsDelayHitComponent::GetRemainDelayHitRequest(TArray<FG01ArtsDelayHitRequest>& OutRequestList) {
}

void UG01ArtsDelayHitComponent::GetMultiTotalCount(int32& OutCount) {
}

void UG01ArtsDelayHitComponent::GetCurrentDelayHitKey(bool& OutIsExist, FG01ArtsDelayHitKey& OutKey) {
}

void UG01ArtsDelayHitComponent::GetCurrentDelayHit(bool& OutIsExist, FName& OutTag, FG01ArtsDelayHitRequest& OutRequest) {
}

void UG01ArtsDelayHitComponent::CancelDelayHit(FName InTag) {
}


