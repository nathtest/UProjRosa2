#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CustomizableSequencerTracks -ObjectName=SequencerTrackInstanceBP -FallbackName=SequencerTrackInstanceBP
#include "SequencerTrackInstanceBP.h"
#include "OnGamePauseParams.h"
#include "SequencerBinkMediaTrackInstance.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;
class UDataTable;
class USequencerBinkMediaSection;

UCLASS(Blueprintable, NonTransient)
class GAMEBASESYSTEM_API USequencerBinkMediaTrackInstance : public USequencerTrackInstanceBP {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* MediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ResourceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USequencerBinkMediaSection* Current;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USequencerBinkMediaSection* Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PlayingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimespan CachedPlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SyncSlackMS;
    
public:
    USequencerBinkMediaTrackInstance();

private:
    UFUNCTION(BlueprintCallable)
    void OnGamePause(const FOnGamePauseParams& InParams);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
};

