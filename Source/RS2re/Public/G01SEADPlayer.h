#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAttachLocation -FallbackName=EAttachLocation
#include "SQEXSEAD2DSoundParameters.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEAD2DSoundParameters -FallbackName=SQEXSEAD2DSoundParameters
#include "SQEXSEAD3DSoundParameters.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEAD3DSoundParameters -FallbackName=SQEXSEAD3DSoundParameters
#include "G01SEADPlayerHandleList.h"
#include "G1SEADPlayerEntry.h"
#include "G01SEADPlayer.generated.h"

class USQEXSEADSoundAttenuation;
class USQEXSEADSoundBank;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01SEADPlayer : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FG1SEADPlayerEntry> BankEntryMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FG01SEADPlayerHandleList> HandleMap;
    
public:
    UG01SEADPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAll(float InFadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    void Stop(FName InKey, float InFadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    void Resume(FName InKey, float InResumeFadeTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayAttached(FName InKey, USceneComponent* InTarget, FSQEXSEAD3DSoundParameters InParams, FName InSocketName, const FVector& InLocation, const FRotator& InRotation, TEnumAsByte<EAttachLocation::Type> InLocationType, USQEXSEADSoundAttenuation* InOverrideAttenuationAsset);
    
    UFUNCTION(BlueprintCallable)
    void Play3D(FName InKey, const FVector& InLocation, FSQEXSEAD3DSoundParameters InParams, USQEXSEADSoundAttenuation* InOverrideAttenuationAsset);
    
    UFUNCTION(BlueprintCallable)
    void Play(FName InKey, FSQEXSEAD2DSoundParameters InParams);
    
    UFUNCTION(BlueprintCallable)
    void Pause(FName InKey, float InPausingFadeTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAny() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying(FName InKey) const;
    
    UFUNCTION(BlueprintCallable)
    void AssignBankEntry(FName InKey, const FG1SEADPlayerEntry& InEntry);
    
    UFUNCTION(BlueprintCallable)
    void AssignBank(FName InKey, USQEXSEADSoundBank* InBank, FName InSoundName, bool InIsAllowMultiPlay);
    
};

