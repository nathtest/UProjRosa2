#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ECheckBattleMainPhaseEnum.h"
#include "EG01BattleMainPhaseType.h"
#include "G01ForceFeedbackControlComponent.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ForceFeedbackControlComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* MForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsPausing;
    
public:
    UG01ForceFeedbackControlComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Resume();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Play(UForceFeedbackEffect* InEffect, bool InIsLoop, FName InTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckBattleMainPhaseType(EG01BattleMainPhaseType InBattleMainPhaseType, ECheckBattleMainPhaseEnum& Branches);
    
};

