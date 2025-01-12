#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SequencePlayFinishParam.h"
#include "SequencePlayPauseParam.h"
#include "SequencePlayStartParam.h"
#include "SequenceManagerObserverInf.generated.h"

class AActor;
class ASequenceController;

UINTERFACE(Blueprintable, MinimalAPI)
class USequenceManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class ISequenceManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequenceManagerObserverInf_OnSequenceStarted(const ASequenceController* InController, const FSequencePlayStartParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequenceManagerObserverInf_OnSequencePreStart(const ASequenceController* InController, const FSequencePlayStartParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequenceManagerObserverInf_OnSequencePlayStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequenceManagerObserverInf_OnSequencePaused(const ASequenceController* InController, const FSequencePlayPauseParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequenceManagerObserverInf_OnSequenceFinished(const ASequenceController* InController, const FSequencePlayFinishParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequenceManagerObserverInf_OnChangeEnableCameraCut(const ASequenceController* InController, bool InIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SequenceManagerObserverInf_OnChangeActiveCamera(const ASequenceController* InController, const AActor* InCameraActor);
    
};

