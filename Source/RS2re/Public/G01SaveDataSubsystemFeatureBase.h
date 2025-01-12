#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "SaveDataSubsystemObserverInf.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=SaveDataSubsystemObserverInf -FallbackName=SaveDataSubsystemObserverInf
#include "G01SaveDataSubsystemFeatureBase.generated.h"

class APlayerController;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class RS2RE_API UG01SaveDataSubsystemFeatureBase : public UObject, public ISaveDataSubsystemObserverInf {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTickEnabled;
    
public:
    UG01SaveDataSubsystemFeatureBase();

    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool InIsEnabled);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo"))
    void RetriggerableDelay(float InDuration, FLatentActionInfo InLatentInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnGameModeInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginPlay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTickEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo"))
    void Delay(float InDuration, FLatentActionInfo InLatentInfo);
    

    // Fix for true pure virtual functions not being implemented
};

