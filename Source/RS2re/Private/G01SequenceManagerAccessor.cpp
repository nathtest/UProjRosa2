#include "G01SequenceManagerAccessor.h"

UG01SequenceManagerAccessor::UG01SequenceManagerAccessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UG01SequenceManagerAccessor::UnregisterBgmPreset(FName InKey) {
}

void UG01SequenceManagerAccessor::SetPlaybackIgnoreCategoriesAll() {
}

void UG01SequenceManagerAccessor::SetPlaybackIgnoreCategories(const TArray<FSeqCategoryView>& InCategories) {
}

void UG01SequenceManagerAccessor::RegisterBgmPreset(FName InKey, const FG01SeqNotifyBgmVolumeParams& InParams) {
}

bool UG01SequenceManagerAccessor::IsEventSceneCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceManagerAccessor::IsBattleEventCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceManagerAccessor::IsBattleCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceManagerAccessor::IsBattleArtsEventCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceManagerAccessor::IsBattleArtsCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

void UG01SequenceManagerAccessor::GetEventSceneCategory(TArray<FSeqCategoryView>& OutCategoryList) const {
}

FG01SeqNotifyBgmVolumeOverride UG01SequenceManagerAccessor::GetCurrentBgmPreset() {
    return FG01SeqNotifyBgmVolumeOverride{};
}

int32 UG01SequenceManagerAccessor::GetCameraPatternIndex() const {
    return 0;
}


