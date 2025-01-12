#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
#include "SQEXSEAD2DSoundParameters.h"
#include "SQEXSEAD3DSoundParameters.h"
#include "SQEXSEADMarkerPointInfo.h"
#include "SQEXSEADTimingInfo.h"
#include "SQEXSeadHandleBP.h"
#include "SQEXSEADBlueprintLibrary.generated.h"

class UObject;
class USQEXSEADSoundAttenuation;
class USQEXSEADSoundBank;
class USQEXSEADSoundComponent;
class USceneComponent;

UCLASS(Blueprintable)
class SQEXSEAD_API USQEXSEADBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USQEXSEADBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static bool StopCategorySounds(FName CategoryName, float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    static USQEXSEADSoundComponent* SpawnSoundAttached(USQEXSEADSoundBank* Bank, FName SoundName, USceneComponent* AttachToComponent, FSQEXSEAD3DSoundParameters Params, FName AttachToSocketName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, USQEXSEADSoundAttenuation* OverrideAttenuationAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USQEXSEADSoundComponent* SpawnSoundAtLocation(UObject* WorldContextObject, USQEXSEADSoundBank* Bank, FName SoundName, FVector Location, FSQEXSEAD3DSoundParameters Params, bool bAutoDestroy, USQEXSEADSoundAttenuation* OverrideAttenuationAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USQEXSEADSoundComponent* SpawnSound2D(UObject* WorldContextObject, USQEXSEADSoundBank* Bank, FName SoundName, FSQEXSEAD2DSoundParameters Params, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static bool SoundStop(FSQEXSeadHandleBP InSoundHandle, float FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetZeroOneValue(FSQEXSeadHandleBP InSoundHandle, int32 ZeroOneSlotIndex, float ZeroOneValue, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSoundVolume(FSQEXSeadHandleBP InSoundHandle, float VolumeMultiplier, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSoundPause(FSQEXSeadHandleBP InSoundHandle, bool bPause, float PausingFadeTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetNextSection(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName SectionName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMode(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName ModeName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetExternalParameter(FName ParameterName, float Value, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetEffectPreset(FName EffectPresetName, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCategoryVolume(FName CategoryName, FName LayerName, float VolumeMultiplier, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCategoryPitch(FName CategoryName, float PitchMultiplier, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCategoryPause(FName CategoryName, bool bPause, float PausingFadeTime);
    
    UFUNCTION(BlueprintCallable)
    static bool Reset(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static FSQEXSeadHandleBP PlaySoundAttached(USQEXSEADSoundBank* SoundBank, FName SoundName, USceneComponent* AttachToComponent, FSQEXSEAD3DSoundParameters Params, FName AttachToSocketName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, USQEXSEADSoundAttenuation* OverrideAttenuationAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSQEXSeadHandleBP PlaySound3D(UObject* WorldContextObject, USQEXSEADSoundBank* SoundBank, FName SoundName, FVector Location, FSQEXSEAD3DSoundParameters Params, USQEXSEADSoundAttenuation* OverrideAttenuationAsset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FSQEXSeadHandleBP PlaySound2D(UObject* WorldContextObject, USQEXSEADSoundBank* SoundBank, FName SoundName, FSQEXSEAD2DSoundParameters Params);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayFrom(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName SectionName, FName ModeName, float FadeInTime, float SeekTime);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValid(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaying(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPausing(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static FSQEXSEADTimingInfo GetSyncTiming(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static float GetPlayingPosition(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumMarkerPoint(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName SectionName, FName ModeName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumMarker(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName SectionName);
    
    UFUNCTION(BlueprintCallable)
    static FSQEXSEADTimingInfo GetNearTiming(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMarkerPointInfo(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName SectionName, int32 MarkerIndex, int32 MarkerPointIndex, FSQEXSEADMarkerPointInfo& Dest);
    
    UFUNCTION(BlueprintCallable)
    static FSQEXSEADTimingInfo GetJustTiming(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentSectionPlaySec(FSQEXSeadHandleBP InSoundHandle);
    
    UFUNCTION(BlueprintCallable)
    static float GetCategoryVolume(FName CategoryName, FName LayerName);
    
    UFUNCTION(BlueprintCallable)
    static bool CallEvent(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    static bool BlendMode(USQEXSEADSoundBank* MusicBank, FSQEXSeadHandleBP InSoundHandle, FName ModeName, float Rate, float FadeTime);
    
};

