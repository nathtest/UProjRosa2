#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneActorReferenceData -FallbackName=MovieSceneActorReferenceData
//CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEADBankSoundEntry -FallbackName=SQEXSEADBankSoundEntry
#include "SQEXSEADAudioPlayOnceStateControlChannel.h"
#include "SQEXSEADAudioPlayOnceTriggerSection.generated.h"

class USQEXSEADSoundAttenuation;
class USQEXSEADSoundBank;

UCLASS(Blueprintable)
class SQEXSEADSEQUENCERTRACKS_API USQEXSEADAudioPlayOnceTriggerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADAudioPlayOnceStateControlChannel ControlKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADBankSoundEntry SoundEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinueSoundOnSequencerEnd;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel SoundVolume;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel PitchMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData AttachActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultSectionAttachComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultSectionAttachSocketName;
    
public:
    USQEXSEADAudioPlayOnceTriggerSection();

    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FFrameNumber InStartOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundName(FName SoundName);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundIndex(int32 SoundIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundBank(USQEXSEADSoundBank* InSound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameNumber GetStartOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSoundName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSoundIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USQEXSEADSoundBank* GetSoundBank() const;
    
};

