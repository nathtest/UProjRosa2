#include "G01SequenceSettings.h"

UG01SequenceSettings::UG01SequenceSettings() {
    this->bEnableCustomBgmVolume = false;
}

bool UG01SequenceSettings::LotteryIsUseSpecialPattern() const {
    return false;
}

bool UG01SequenceSettings::IsUseRandomPattern() const {
    return false;
}

bool UG01SequenceSettings::IsUseRandomIncrementValue() const {
    return false;
}

bool UG01SequenceSettings::IsSpLotteryForRandom() const {
    return false;
}

bool UG01SequenceSettings::IsPlayerArtsCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceSettings::IsPauseableCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceSettings::IsKeepPatternIndexWhenSpecialPattern() const {
    return false;
}

bool UG01SequenceSettings::IsForceSpecialPatternForRandom() const {
    return false;
}

bool UG01SequenceSettings::IsFieldEventCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceSettings::IsEventCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceSettings::IsEnemyArtsCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceSettings::IsEnableCustomBgmVolume() const {
    return false;
}

bool UG01SequenceSettings::IsBattleEventCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceSettings::IsBattleCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceSettings::IsArtsEventCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

bool UG01SequenceSettings::IsArtsCategory(const FSeqCategoryView& InCategory) const {
    return false;
}

FString UG01SequenceSettings::GetSpecialPatternSuffix() const {
    return TEXT("");
}

float UG01SequenceSettings::GetSpecialPatternProbability() const {
    return 0.0f;
}

FG01SeqSkipSettings UG01SequenceSettings::GetSkipSettings() const {
    return FG01SeqSkipSettings{};
}

float UG01SequenceSettings::GetSkipReleaseTime() const {
    return 0.0f;
}

float UG01SequenceSettings::GetSkipPressTime() const {
    return 0.0f;
}

TArray<FSeqCategoryView> UG01SequenceSettings::GetPlayerArtsCategories() const {
    return TArray<FSeqCategoryView>();
}

int32 UG01SequenceSettings::GetPatternIncrementValue() const {
    return 0;
}

TArray<FSeqCategoryView> UG01SequenceSettings::GetFieldEventCategories() const {
    return TArray<FSeqCategoryView>();
}

TArray<FSeqCategoryView> UG01SequenceSettings::GetEventCategories() const {
    return TArray<FSeqCategoryView>();
}

TArray<FSeqCategoryView> UG01SequenceSettings::GetEnemyArtsCategories() const {
    return TArray<FSeqCategoryView>();
}

FG01SeqNotifyBgmVolumePreset UG01SequenceSettings::GetDefaultBgmPreset() const {
    return FG01SeqNotifyBgmVolumePreset{};
}

FG01SeqCommonSettings UG01SequenceSettings::GetCommonSettings() const {
    return FG01SeqCommonSettings{};
}

FG01SeqCameraPatternSettingParams UG01SequenceSettings::GetCameraPatternSettings() const {
    return FG01SeqCameraPatternSettingParams{};
}

int32 UG01SequenceSettings::GetBeginPatternIndex() const {
    return 0;
}

TArray<FSeqCategoryView> UG01SequenceSettings::GetBattleEventCategories() const {
    return TArray<FSeqCategoryView>();
}

TArray<FSeqCategoryView> UG01SequenceSettings::GetBattleCameraCategories() const {
    return TArray<FSeqCategoryView>();
}

TArray<FSeqCategoryView> UG01SequenceSettings::GetArtsEventCategories() const {
    return TArray<FSeqCategoryView>();
}

TArray<FSeqCategoryView> UG01SequenceSettings::GetAllCategories() const {
    return TArray<FSeqCategoryView>();
}


