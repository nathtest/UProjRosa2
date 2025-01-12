#pragma once
#include "CoreMinimal.h"
#include "ManagerBase.h"
#include "OnSequencerPlayFinishedDelegate.h"
#include "OnSequencerPlayStartDelegate.h"
#include "ScreenTransitionManagerObserverInf.h"
#include "SeqFadeOutReserve.h"
#include "SeqLoadingControllerParam.h"
#include "SeqLoadingControllerParamList.h"
#include "SeqTypeView.h"
#include "SequenceManagerInf.h"
#include "SequencePlayFinishParam.h"
#include "SequencePlayPauseParam.h"
#include "SequencePlayStartParam.h"
#include "Templates/SubclassOf.h"
#include "SequencerManager.generated.h"

class AActor;
class AEventObjectBase;
class ASequenceCameraController;
class ASequenceController;
class UDataTable;
class ULevelSequence;
class ULoadScreenManagerAccessor;
class UObject;
class UScreenTransitionManagerAccessor;
class USequenceSettingDataAsset;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequencerManager : public AManagerBase, public ISequenceManagerInf, public IScreenTransitionManagerObserverInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USequenceSettingDataAsset> SequenceSettingsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScreenTransitionManagerAccessor* MScreenTransitionAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadScreenManagerAccessor* MLoadScreenManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AEventObjectBase> MSequencerPlayEventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASequenceController> MDefaultUseSeqContClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqTypeView> MDisableInteractSequenceTypes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequencerPlayStart OnSequencerStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequencerPlayFinished OnSequencerFinishedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MSequencerParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MSequencerTypeTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSequenceStartFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USequenceSettingDataAsset* SequenceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASequenceController*> SequenceControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASequenceCameraController*> SeqCameraController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASequenceController* CameraUseSequenceController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ULevelSequence>, FSeqLoadingControllerParamList> AssetLoadingControllerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ULevelSequence>, FSeqLoadingControllerParamList> InternalLoadingControllerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqLoadingControllerParam> ScreenHideWaitControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqFadeOutReserve FadeOutReserve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsNotifyPlayStarted;
    
public:
    ASequencerManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSequenceStartedBP(const ASequenceController* InController, const FSequencePlayStartParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceStarted(const ASequenceController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSequencePreStartBP(const ASequenceController* InController, const FSequencePlayStartParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void OnSequencePreStart(const ASequenceController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSequencePausedBP(const ASequenceController* InController, const FSequencePlayPauseParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void OnSequencePaused(const ASequenceController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSequenceFinishedBP(const ASequenceController* InController, const FSequencePlayFinishParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceFinished(const ASequenceController* InController);
    
    UFUNCTION(BlueprintCallable)
    void OnSeqControllerDestroyed(AActor* InDestroyActor);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeEnableCameraCut(const ASequenceController* InController, bool InIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeActiveCamera(const ASequenceController* InController, const AActor* InCameraActor);
    
    UFUNCTION(BlueprintCallable)
    void OnAssetLoadCompleted(const TArray<UObject*>& InLoadedAssets);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExecutableStartFadeOut(const ASequenceController* InController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExecutableLoadFade(const ASequenceController* InController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExecutableFinishFadeOut(const ASequenceController* InController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USequenceSettingDataAsset* GetSequenceSettings() const;
    

    // Fix for true pure virtual functions not being implemented
};

