#pragma once
#include "CoreMinimal.h"
#include "SeqCategoryView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqCategoryView -FallbackName=SeqCategoryView
#include "SequenceSettingDataAsset.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequenceSettingDataAsset -FallbackName=SequenceSettingDataAsset
#include "G01SeqCameraPatternSettingParams.h"
#include "G01SeqCommonSettings.h"
#include "G01SeqNotifyBgmVolumePreset.h"
#include "G01SeqSkipSettings.h"
#include "G01SequenceSettings.generated.h"

UCLASS(Blueprintable)
class RS2RE_API UG01SequenceSettings : public USequenceSettingDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqCommonSettings MCommonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqSkipSettings MSkipSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqCameraPatternSettingParams MCameraPatternSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqNotifyBgmVolumePreset DefaultBgmPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCustomBgmVolume;
    
public:
    UG01SequenceSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool LotteryIsUseSpecialPattern() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseRandomPattern() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUseRandomIncrementValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpLotteryForRandom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerArtsCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPauseableCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeepPatternIndexWhenSpecialPattern() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceSpecialPatternForRandom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFieldEventCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnemyArtsCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableCustomBgmVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleEventCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArtsEventCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArtsCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSpecialPatternSuffix() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialPatternProbability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SeqSkipSettings GetSkipSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSkipReleaseTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSkipPressTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSeqCategoryView> GetPlayerArtsCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPatternIncrementValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSeqCategoryView> GetFieldEventCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSeqCategoryView> GetEventCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSeqCategoryView> GetEnemyArtsCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SeqNotifyBgmVolumePreset GetDefaultBgmPreset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SeqCommonSettings GetCommonSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FG01SeqCameraPatternSettingParams GetCameraPatternSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBeginPatternIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSeqCategoryView> GetBattleEventCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSeqCategoryView> GetBattleCameraCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSeqCategoryView> GetArtsEventCategories() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSeqCategoryView> GetAllCategories() const;
    
};

