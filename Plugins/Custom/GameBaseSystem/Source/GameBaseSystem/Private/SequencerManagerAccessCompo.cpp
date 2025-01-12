#include "SequencerManagerAccessCompo.h"
#include "EManagerID.h"
#include "Templates/SubclassOf.h"

USequencerManagerAccessCompo::USequencerManagerAccessCompo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MDefaultManagerId = EManagerID::MGR_ID_SEQUENCE;
}

void USequencerManagerAccessCompo::UnbindDelegateSequenceStart(const FOnSequencerPlayStartScript& InEvent) {
}

void USequencerManagerAccessCompo::UnbindDelegateSequenceFinished(const FOnSequencerPlayFinishedScript& InEvent) {
}

ASequenceController* USequencerManagerAccessCompo::RequestLevelSequence(TSoftObjectPtr<ULevelSequence> InSequencerAsset, int32 InPlayCount, bool InIsAutoDestroy, AActor* InPlayOriginActor, FTransform InPlayOriginTransform, FSeqActorSlotBinderArgs InActorSlotBinderArg, FSeqCameraBinderArgument InCameraBinderArg, FSequenceLoadSettings InLoadSettings, TSubclassOf<ASequenceController> InUseSeqContClass, bool InIsUseLevelTransitionQueue, bool InIsCreateNewInstance, bool InIsUseLoadFade) {
    return NULL;
}

void USequencerManagerAccessCompo::PlaySequencersByCondition(int32 InCondition) {
}

void USequencerManagerAccessCompo::PlaySequencersByCategory(FSeqCategoryView InCategory) {
}

void USequencerManagerAccessCompo::PauseSequencersByCondition(int32 InCondition, bool InIsPauseCharaAnimation) {
}

void USequencerManagerAccessCompo::PauseSequencersByCategory(FSeqCategoryView InCategory, bool InIsPauseCharaAnimation) {
}

void USequencerManagerAccessCompo::IsPlayingAny(bool& OutIsPlaying) {
}

void USequencerManagerAccessCompo::IsAnySequencePlayingByCategory(const TArray<FSeqCategoryView>& InCategoryList, bool& OutIsPlaying) {
}

void USequencerManagerAccessCompo::IsAnySequenceLoadingByCategory(const TArray<FSeqCategoryView>& InCategoryList, bool& ReIsLoading) {
}

void USequencerManagerAccessCompo::IsAnySequenceLoading(bool& ReIsLoading) {
}

TArray<ASequenceController*> USequencerManagerAccessCompo::GetSequenceControllers() {
    return TArray<ASequenceController*>();
}

void USequencerManagerAccessCompo::FindSeqControllerByCondition(int32 InCondition, TArray<ASequenceController*>& OutSeqControllers) {
}

void USequencerManagerAccessCompo::FindSeqControllerByCategory(FSeqCategoryView InCategory, TArray<ASequenceController*>& OutSeqControllers) {
}

void USequencerManagerAccessCompo::EndSequencersByCondition(int32 InCondition) {
}

void USequencerManagerAccessCompo::EndSequencersByCategory(FSeqCategoryView InCategory) {
}

void USequencerManagerAccessCompo::BindDelegateSequenceStart(const FOnSequencerPlayStartScript& InEvent) {
}

void USequencerManagerAccessCompo::BindDelegateSequenceFinished(const FOnSequencerPlayFinishedScript& InEvent) {
}


