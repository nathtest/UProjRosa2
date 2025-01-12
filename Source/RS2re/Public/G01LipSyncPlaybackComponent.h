#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LipsyncParam.h" //CROSS-MODULE INCLUDE V2: -ModuleName=LipSyncCurve -ObjectName=LipsyncParam -FallbackName=LipsyncParam
#include "EG01LipSyncCustomUpdateType.h"
#include "EG01LipSyncPlayState.h"
#include "EG01LipSyncPlayType.h"
#include "G01GeneralLipPresetID.h"
#include "G01GeneralLipsyncPresetPlayArgs.h"
#include "G01LipsyncPlayArgs.h"
#include "G01SEADActiveSoundShared.h"
#include "G01LipSyncPlaybackComponent.generated.h"

class UCurveLipsync;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01LipSyncPlaybackComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01LipSyncPlayType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01LipSyncPlayState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01LipsyncPlayArgs PlayArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveLipsync* LipSyncCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SEADActiveSoundShared PlayVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CustomTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01LipSyncCustomUpdateType CustomUpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLipsyncParam CachedLipsyncParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CustomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GeneralPlaySeconds;
    
public:
    UG01LipSyncPlaybackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void StartMenu(FName InVoiceID, const FG01LipsyncPlayArgs& InArgs, EG01LipSyncCustomUpdateType InCustomUpdateType);
    
    UFUNCTION(BlueprintCallable)
    void StartGeneral(FName InVoiceID, FG01GeneralLipPresetID InPresetID, const FG01GeneralLipsyncPresetPlayArgs& InArgs, EG01LipSyncCustomUpdateType InCustomUpdateType);
    
    UFUNCTION(BlueprintCallable)
    void Start(FName InVoiceID, const FG01LipsyncPlayArgs& InArgs, EG01LipSyncCustomUpdateType InCustomUpdateType);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLipsyncParam GetLipsyncParam() const;
    
    UFUNCTION(BlueprintCallable)
    void AddCustomTime(float InDeltaTime);
    
};

