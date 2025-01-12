#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=LevelSequenceCameraSettings -FallbackName=LevelSequenceCameraSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EUpdatePositionMethod -FallbackName=EUpdatePositionMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePlaybackClient -FallbackName=MovieScenePlaybackClient
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequenceActor -FallbackName=MovieSceneSequenceActor
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
#include "AppActor.h"
#include "ESeqControllerTickState.h"
#include "ESeqSkipType.h"
#include "ESeqTrackSampleType.h"
#include "ESeqTransformControlType.h"
#include "ESequenceEndReason.h"
#include "OnAvailableSeqControllerDelegate.h"
#include "OnExecuteJumpToFrameDelegate.h"
#include "OnSequenceFinishedDelegate.h"
#include "OnSequenceStartedDelegate.h"
#include "SeqActionControllerArray.h"
#include "SeqActorSlotArg.h"
#include "SeqBinderTransformOverrideParam.h"
#include "SeqCameraBinderArgument.h"
#include "SeqCategoryView.h"
#include "SeqGeneralEventParam.h"
#include "SeqGeneralRepeaterRegisterParam.h"
#include "SeqGeneralTriggerRegisterParam.h"
#include "SeqJumpToFrameParam.h"
#include "SeqMarkedFramePlayRate.h"
#include "SeqMarkedFrameRange.h"
#include "SeqPlayArguments.h"
#include "SeqPlaybackRangeData.h"
#include "SeqTypeView.h"
#include "SequenceLoadSettings.h"
#include "Templates/SubclassOf.h"
#include <LevelSequencePlayer.h>
#include "MovieSceneBindingOverrides.h"
#include "SequenceController.generated.h"

class AActor;
class ASeqActorSlotControllerBinder;
class ASequenceActControllerBinderBase;
class ASequenceActionControllerBase;
class ASequenceCameraControllerBinder;
class UCustomLevelSequenceInstanceData;
class UCustomLevelSequencePlayer;
class UDataTable;
class ULevelSequence;
class UMovieSceneBindingOverrides;
class UObject;
class USequenceLoadControlComponent;
class USequenceResources;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceController : public AAppActor, public IMovieSceneSequenceActor, public IMovieScenePlaybackClient {
    GENERATED_BODY()
public:

    // Implementations of IMovieSceneSequenceActor
    virtual void TickFromSequenceTickManager(float DeltaTime) override;

    // Implementations of IMovieScenePlaybackClient
    virtual bool RetrieveBindingOverrides(const FGuid& ObjectBinding, FMovieSceneSequenceID SequenceID, TArray<UObject*, TInlineAllocator<1, FDefaultAllocator>>& OutObjects) const override;
    virtual UObject* GetInstanceData() const override;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAvailableSeqController MOnAvailableController;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExecuteJumpToFrame OnExecutePreJumpToFrame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExecuteJumpToFrame MOnExecuteJumpToFrame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExecuteJumpToFrame OnExecutePostJumpToFrame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequenceStarted MOnSequenceStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSequenceFinished MOnSequenceFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USequenceLoadControlComponent> MSequenceResourceLoaderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USequenceLoadControlComponent* MSequenceResourceLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MRequiredControllerCreateInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackSettings MPlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelSequenceCameraSettings MCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> MSequencerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomLevelSequencePlayer* MCustomLevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* MPlayLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneBindingOverrides* MBindingOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomLevelSequenceInstanceData* MCustomInstanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASequenceActControllerBinderBase*> MActionControllerBinders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FSeqActionControllerArray> MActionControllerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FSeqActionControllerArray> AddActionControllerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASequenceActionControllerBase*> MRequiredControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ChoiceIndexResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsReserveSkipEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqPlayArguments PlayArguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSequenceLoadSettings LoadSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveTrackRowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSeqPlaybackRangeData PlaybackRangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlaybackOvertimeCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqMarkedFramePlayRate> MarkedFramePlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqGeneralTriggerRegisterParam> GeneralTriggerEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqGeneralRepeaterRegisterParam> GeneralRepeaterEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESeqControllerTickState TickState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EndDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EndDelayElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SpawnedPreInitObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SpawnedPreActivateObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> SpawnedObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedTrackActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASequenceActionControllerBase*> WorkingControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> CustomWorkingFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSeqJumpToFrameParam> JumpFrameQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FrameJumpAnimBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsForceEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FSeqBinderTransformOverrideParam> SlotActorBinderOverrideTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFrameTime PreUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFrameTime LastUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFrameNumber RestorePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USequenceResources* SequenceResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFirstUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> UserObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> ObjectCacheMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESequenceEndReason EndReason;
    
public:
    ASequenceController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UObject* UnregisterCacheObject(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackSettings(const FMovieSceneSequencePlaybackSettings& InPlaybackSettings);
    
    UFUNCTION(BlueprintCallable)
    void ResetSequenceController();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterCacheObject(FName InKey, UObject* InObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnregisterTickManager();
    
    UFUNCTION(BlueprintCallable)
    void OnSequenceResourceLoadComplete(ULevelSequence* InLoadedSequence);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRegisterTickManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPrePlaySequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPostPlaySequencer();
    
    UFUNCTION(BlueprintCallable)
    void OnPlaySequencer();
    
    UFUNCTION(BlueprintCallable)
    void OnPauseSequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvokeGeneralTriggerEvent(const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvokeGeneralTickRepeaterEvent(const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvokeGeneralEndRepeaterEvent(const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvokeGeneralBeginRepeaterEvent(const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedSequencer();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyedSpawnActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAvailableSequenceController();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSequenceFrameUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableCameraCut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasAnyTrackGeneralTriggerEvent(FName InEventKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool HasAnyTrackGeneralRepeaterEvent(FName InEventKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeqTypeView GetSequencerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeqCategoryView GetSequencerCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSequenceID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESequenceEndReason GetSequenceEndReason() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSequenceDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieSceneSequencePlaybackSettings GetPlaybackSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<ULevelSequence> GetLevelSequencePath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFrameJumpAnimBlendTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCameraPatternIndex(int32 InPatternMaxNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSeqActionControllerArray> FindDerivedControllerArray(UClass* InBaseClass) const;
    
    UFUNCTION(BlueprintCallable)
    UObject* FindCacheObject(FName InKey);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_UnregisterPlayRateByMarkedFrame(const FSeqMarkedFrameRange& InRange);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_UnregisterGeneralTriggerEventByEventKey(FName InEventKey);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_UnregisterGeneralTriggerEvent(int32 InFrameNumber, const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_UnregisterGeneralRepeaterEventByEventKey(FName InEventKey);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_UnregisterGeneralRepeaterEvent(int32 InBeginFrame, int32 InEndFrame, const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetTransformOriginActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetTransformOrigin(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetRestorePosition(FFrameNumber InRestorePosition);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetPlaybackRangeOffset(int32 InLowerFrameOffset, int32 InUpperFrameOffset);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetPlaybackRange(const FInt32Range& InFrameRange);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetOverrideTransformForSlotActor(int32 InSlotIndex, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetEnableOverrideTransformForSlotActor(int32 InSlotIndex, ESeqTransformControlType InLocationType, ESeqTransformControlType InRotationType, ESeqTransformControlType InScaleType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetEnableCameraCut(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetDisableSequenceActorOffset(bool InIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetCustomWorkFlag(FName InCustomFlagName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetCameraBinder(FSeqCameraBinderArgument InBindArg);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetActorSlotAll(const TArray<FSeqActorSlotArg>& InSlotArgs);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SetActorSlot(FSeqActorSlotArg InSlotArg);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SequencerJumpToSeconds(float InSeconds, EUpdatePositionMethod InUpdateMethod, float InJumpAnimBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_SequencerJumpToFrame(const FFrameTime& InFrame, EUpdatePositionMethod InUpdateMethod, float InJumpAnimBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_RestoreSequence();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_ResetRestorePosition();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_ResetPlaybackRange();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_RequestEndSequencer();
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_RemoveUserObject(UObject* InUser);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_RegisterPlayRateByMarkedFrame(const FSeqMarkedFramePlayRate& InParam);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_RegisterGeneralTriggerEvent(int32 InFrameNumber, const FSeqGeneralEventParam& InParam, bool InIsUniqueKey);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_RegisterGeneralRepeaterEvent(int32 InBeginFrame, int32 InEndFrame, const FSeqGeneralEventParam& InParam, bool InIsUniqueKey);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_PlaySequencer(int32 InPlayCount);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_PauseSequencer(bool InIsPauseCharaAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsWorkingAnyActionController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsUsePlaybackOvertime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsFrameJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsEnableCameraCut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsDuringPlaybackOvertime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsAnyCustomFlagWorking() const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_GetSlotActorTransform(int32 InSlotIndex, ESeqTrackSampleType InType, ASeqActorSlotControllerBinder*& OutSlotBinderTemplate, FTransform& OutTransform, bool InIsAddOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameTime Cmd_SA_GetPreUpdateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Cmd_SA_GetPlayCount() const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_GetOverlappingActors(TArray<AActor*>& OutActors, TSubclassOf<AActor> InClassFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform Cmd_SA_GetOriginTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* Cmd_SA_GetOriginActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameTime Cmd_SA_GetLastUpdateTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_SA_GetFullPlaybackRange(FInt32Range& OutFrameRange) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_GetDisableSequenceActorOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_GetCustomWorkFlag(FName InCustomFlagName) const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_GetBinderTransform(FName InBinderID, ESeqTrackSampleType InType, TArray<FTransform>& OutTransforms, bool InIsAddOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Cmd_SA_GetActualPlaybackRange(FInt32Range& OutFrameRange) const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_GetActiveCameraTransform(ESeqTrackSampleType InType, ASequenceCameraControllerBinder*& OutCameraBinderTemplate, FTransform& OutTransform, bool InIsAddOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* Cmd_SA_GetActiveCameraActor() const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_FindSlotActorOverrideTransform(int32 InSlotIndex, bool OutIsFound, FSeqBinderTransformOverrideParam& OutTransformOverrideParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSeqGeneralTriggerRegisterParam> Cmd_SA_FindGeneralTriggerParams(const FSeqGeneralEventParam& InParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FSeqGeneralRepeaterRegisterParam> Cmd_SA_FindGeneralRepeaterParams(const FSeqGeneralEventParam& InParam) const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_ExecuteSkip(ESeqSkipType InSkipType);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_EndSequencer(float InDelaySeconds);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_AddUserObject(UObject* InUser);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_AddPlaybackRangeOffset(int32 InLowerFrameOffset, int32 InUpperFrameOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckTickState(ESeqControllerTickState InState) const;
    

    // Fix for true pure virtual functions not being implemented
};

