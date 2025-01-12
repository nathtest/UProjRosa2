#pragma once
#include "CoreMinimal.h"
#include "SeqCategoryView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqCategoryView -FallbackName=SeqCategoryView
#include "SequencerManagerAccessCompo.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SequencerManagerAccessCompo -FallbackName=SequencerManagerAccessCompo
#include "G01SeqNotifyBgmVolumeOverride.h"
#include "G01SeqNotifyBgmVolumeParams.h"
#include "G01SequenceManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01SequenceManagerAccessor : public USequencerManagerAccessCompo {
    GENERATED_BODY()
public:
    UG01SequenceManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterBgmPreset(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackIgnoreCategoriesAll();
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackIgnoreCategories(const TArray<FSeqCategoryView>& InCategories);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBgmPreset(FName InKey, const FG01SeqNotifyBgmVolumeParams& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventSceneCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleEventCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleArtsEventCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleArtsCategory(const FSeqCategoryView& InCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEventSceneCategory(TArray<FSeqCategoryView>& OutCategoryList) const;
    
    UFUNCTION(BlueprintCallable)
    FG01SeqNotifyBgmVolumeOverride GetCurrentBgmPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCameraPatternIndex() const;
    
};

