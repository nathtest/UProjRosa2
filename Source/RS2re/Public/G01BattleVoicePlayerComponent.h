#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EG01BattleVoiceTriggerType.h"
#include "G01BattleVoiceTableRow.h"
#include "G01SEADActiveSoundShared.h"
#include "G01BattleVoicePlayerComponent.generated.h"

class AActor;
class AG01BattleVoiceController;
class UG01LipSyncManagerAccessor;
class UG01VoiceManagerAccessor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01BattleVoicePlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01VoiceManagerAccessor* VoiceManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UG01LipSyncManagerAccessor* LipSyncManagerAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AG01BattleVoiceController* VoiceCtrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* VisualActorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName VoiceDataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01BattleVoiceTableRow VoiceTableRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EG01BattleVoiceTriggerType LastTriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SEADActiveSoundShared NormalVoiceHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SEADActiveSoundShared ReactionVoiceHandle;
    
public:
    UG01BattleVoicePlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryProcessAnimKey(FName InKey, bool& OutIsProcess, bool& OutIsPlay);
    
    UFUNCTION(BlueprintCallable)
    void StopVoice();
    
    UFUNCTION(BlueprintCallable)
    void StopReactionVoice();
    
    UFUNCTION(BlueprintCallable)
    void StopNormalVoice();
    
    UFUNCTION(BlueprintCallable)
    void SetupVoice(FName InVoiceDataId, const FG01BattleVoiceTableRow& InVoiceTableRow);
    
    UFUNCTION(BlueprintCallable)
    void SetController(AG01BattleVoiceController* InVoiceCtrl);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice3D(EG01BattleVoiceTriggerType InTrigger);
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice2D(EG01BattleVoiceTriggerType InTrigger);
    
    UFUNCTION(BlueprintCallable)
    void LotteryTriggerByWeight(const TArray<EG01BattleVoiceTriggerType>& InTriggerList, const TArray<int32>& InWeightList, bool InExcludeEmpty, bool& OutSuccess, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayingVoice(bool& OutIsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayingReactionVoice(bool& OutIsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPlayingNormalVoice(bool& OutIsPlaying);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLastTriggerType(EG01BattleVoiceTriggerType& OutTrigger);
    
};

