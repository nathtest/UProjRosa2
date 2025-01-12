#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SeqCategoryView.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SeqCategoryView -FallbackName=SeqCategoryView
#include "G01SeqNotifyBgmVolumeOverride.h"
#include "G01SeqNotifyBgmVolumeParams.h"
#include "G01SequencerManagerInterface.generated.h"

class AActor;
class ASequenceController;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SequencerManagerInterface : public UInterface {
    GENERATED_BODY()
};

class IG01SequencerManagerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01SequencerManager_UpdateCameraPatternIndex(ASequenceController* InSeqController, AActor* InVisualActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SequencerManager_UnregisterBgmPreset(FName InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SequencerManager_SetPlaybackIgnoreCategoriesAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SequencerManager_SetPlaybackIgnoreCategories(const TArray<FSeqCategoryView>& InCategories);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SequencerManager_SetForceCameraPatternIndex(int32 InCameraPatternIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SequencerManager_SetDirtyBgmVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SequencerManager_RegisterBgmPreset(FName InKey, const FG01SeqNotifyBgmVolumeParams& InParams);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01SequencerManager_IsEventSceneCategory(FSeqCategoryView InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01SequencerManager_IsBattleEventCategory(FSeqCategoryView InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01SequencerManager_IsBattleCategory(FSeqCategoryView InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01SequencerManager_IsBattleArtsEventCategory(FSeqCategoryView InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01SequencerManager_IsBattleArtsCategory(FSeqCategoryView InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SequencerManager_GetEventSceneCategory(TArray<FSeqCategoryView>& OutEventCategoryList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FG01SeqNotifyBgmVolumeOverride Inf_G01SequencerManager_GetCurrentBgmPreset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_G01SequencerManager_GetCameraPatternIndex();
    
};

