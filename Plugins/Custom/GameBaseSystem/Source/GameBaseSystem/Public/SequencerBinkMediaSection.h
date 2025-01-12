#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CustomizableSequencerTracks -ObjectName=SequencerSectionBP -FallbackName=SequencerSectionBP
#include "BinkMediaResourceID.h"
#include "ESequencerBinkMediaSectionResourceType.h"
#include "SequencerSectionBP.h"
#include "SequencerBinkMediaSection.generated.h"

UCLASS(Blueprintable)
// before USequencerSectionBP
class GAMEBASESYSTEM_API USequencerBinkMediaSection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRendering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequencerBinkMediaSectionResourceType ResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBinkMediaResourceID ResourceID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBinkMediaResourceID> ResourceIDs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTimespan> ResourceDurations;
    
public:
    USequencerBinkMediaSection();

    UFUNCTION(BlueprintCallable)
    void SetResourceID(const TArray<FBinkMediaResourceID>& InResourceIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRendering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameRate GetTickResolution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResourceIndex(float& OutStartOffset, float InTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBinkMediaResourceID> GetResourceIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRangeSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimespan GetPlayTime(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlaySeconds(int32 InIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrameBase() const;
    
};

