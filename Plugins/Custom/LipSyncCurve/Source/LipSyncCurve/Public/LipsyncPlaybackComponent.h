#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LipsyncParam.h"
#include "LipsyncPlaybackComponent.generated.h"

class UAudioComponent;
class UCurveLipsync;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LIPSYNCCURVE_API ULipsyncPlaybackComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* VoiceAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveLipsync* CurveLipsync;
    
public:
    ULipsyncPlaybackComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void StartLipsync(UAudioComponent* InAudioComponent, UCurveLipsync* InCurve);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateLipsyncValue(float PlaybackTime, const FLipsyncParam& Visemes);
    
};

