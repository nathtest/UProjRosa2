#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EViewTargetBlendFunction -FallbackName=EViewTargetBlendFunction
#include "ESeqSkipType.h"
#include "OnSequencerPlayFinishedScriptDelegate.h"
#include "OnSequencerPlayStartScriptDelegate.h"
#include "SeqCategoryView.h"
#include "SeqPlayArguments.h"
#include "SeqTypeView.h"
#include "SequenceLoadSettings.h"
#include "Templates/SubclassOf.h"
#include "SequenceManagerInf.generated.h"

class AActor;
class ASequenceCameraController;
class ASequenceController;
class ULevelSequence;
class USequenceSettingDataAsset;

UINTERFACE(Blueprintable, MinimalAPI)
class USequenceManagerInf : public UInterface {
    GENERATED_BODY()
};

class ISequenceManagerInf : public IInterface {
    GENERATED_BODY()
public:
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //void Inf_SequencerManager_UnregisterSequenceCameraController(ASequenceCameraController* InCameraController, float InBlendTime, TEnumAsByte<EViewTargetBlendFunction> InBlendFunc, float InBlendExp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_UnbindDelegateSequenceStart(const FOnSequencerPlayStartScript& InEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_UnbindDelegateSequenceFinished(const FOnSequencerPlayFinishedScript& InEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ASequenceController* Inf_SequencerManager_RequestLevelSequence(const FSeqPlayArguments& InPlayArgs, const FSequenceLoadSettings& InLoadSettings, TSubclassOf<ASequenceController> InUseSeqContClass, bool InIsUseLevelTransitionQueue);
    
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //void Inf_SequencerManager_RegisterSequenceCameraController(ASequenceCameraController* InCameraController, float InBlendTime, TEnumAsByte<EViewTargetBlendFunction> InBlendFunc, float InBlendExp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_PlaySequencersByCondition(int32 InCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_PlaySequencersByCategory(FSeqCategoryView InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_PauseSequencersByCondition(int32 InCondition, bool InIsPauseCharaAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_PauseSequencersByCategory(FSeqCategoryView InCategory, bool InIsPauseCharaAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_OnStartSequence(ASequenceController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_OnRestoreSequenceController(ASequenceController* InSequenceController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_OnPreStartSequence(ASequenceController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_OnPauseSequence(ASequenceController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_OnLoadCompleted(ASequenceController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_OnFirstUpdate(ASequenceController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_OnFinishSequence(ASequenceController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_OnChangeEnableCameraCut(ASequenceController* InController, bool InIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_OnChangeActiveCamera(ASequenceController* InController, const AActor* InCameraActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_IsPlayingAny(bool& OutIsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_IsPlaying(bool& OutIsPlaying, const TSoftObjectPtr<ULevelSequence>& InSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_IsAnySequencePlayingByCategory(const TArray<FSeqCategoryView>& InCategoryList, bool& OutIsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_IsAnySequenceLoadingByCategory(const TArray<FSeqCategoryView>& InCategoryList, bool& ReIsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_IsAnySequenceLoading(bool& ReIsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USequenceSettingDataAsset* Inf_SequencerManager_GetSequenceSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<ASequenceController*> Inf_SequencerManager_GetSequenceControllers();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_FindSeqControllerByCondition(int32 InCondition, TArray<ASequenceController*>& OutSeqControllers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_FindSeqControllerByCategory(FSeqCategoryView InCategory, TArray<ASequenceController*>& OutSeqControllers);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_ExecuteSkip(ESeqSkipType InSkipType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_EndSequencersByCondition(int32 InCondition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_EndSequencersByCategory(FSeqCategoryView InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_SequencerManager_CheckPlayerInteractLockSequenceType(FSeqTypeView InSequenceType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_BindDelegateSequenceStart(const FOnSequencerPlayStartScript& InEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequencerManager_BindDelegateSequenceFinished(const FOnSequencerPlayFinishedScript& InEvent);
    
};

