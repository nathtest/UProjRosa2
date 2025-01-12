#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
#include "SQEXSEADBankSoundEntry.h"
#include "SQEXSEADLayoutInfo.h"
#include "SQEXSEADLayoutSoundComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQEXSEAD_API USQEXSEADLayoutSoundComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADBankSoundEntry BankSoundEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADLayoutInfo LayoutInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchMultiplier;
    
    USQEXSEADLayoutSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeMultiplier(float NewVolumeMultiplier, float FadeTimeDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchMultiplier(float NewPitchMultiplier, float FadeTimeDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool bPause, float FadeTimeDuration);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsAudible();
    
};

