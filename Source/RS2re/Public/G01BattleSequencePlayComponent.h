#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnChangedDispatcherDelegate.h"
#include "G01BattleSequencePlayComponent.generated.h"

class AG01SequenceControllerBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleSequencePlayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedDispatcher OnChangedPlaybackOffsetEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableExtendPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableRegisterOriginalEndEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OriginalEndEventKey;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AG01SequenceControllerBase* CurrentSeqCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> PlaybackStartOffsetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> PlaybackEndOffsetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 DelayHitEndOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FTransform> TargetTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetTransformYaw;
    
public:
    UG01BattleSequencePlayComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterPlaybackOffset(FName InUniqueID);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetTransformOverrideRotateYaw(float InYaw);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetTransformOverride(int32 InTargetNo, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceCtrl(AG01SequenceControllerBase* InSeqCtrl);
    
    UFUNCTION(BlueprintCallable)
    void SetRepeaterEventOffset(FName InKey, int32 InBeginOffset, int32 InEndOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetRepeaterEventAbsolute(FName InKey, int32 InBeginFrame, int32 InEndFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkInterpStartOffset(int32 InStartOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkInterpEndOffset(int32 InEndOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCameraCut(bool InIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDelayHitEndOffset(int32 InEndOffset);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlaybackOffset(FName InUniqueID, int32 InStartOffset, int32 InEndOffset);
    
    UFUNCTION(BlueprintCallable)
    void GetPlaybackOffset(int32& OutStartOffset, int32& OutEndOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentPlayTime(int32& OutPlayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActualPlaybackRange(int32& OutLower, int32& OutUpper);
    
    UFUNCTION(BlueprintCallable)
    void ClearPlaybackOffset();
    
    UFUNCTION(BlueprintCallable)
    void ApplyPlaybackOffset();
    
};

