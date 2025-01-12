#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvaluationOperand -FallbackName=MovieSceneEvaluationOperand
#include "SequenceTrackActorInf.generated.h"

class AActor;
class UCustomLevelSequencePlayer;

UINTERFACE(Blueprintable, MinimalAPI)
class USequenceTrackActorInf : public UInterface {
    GENERATED_BODY()
};

class ISequenceTrackActorInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void Inf_SeqTrackActor_Setup(UCustomLevelSequencePlayer* InSequencePlayer, const FMovieSceneEvaluationOperand& InOperand) PURE_VIRTUAL(Inf_SeqTrackActor_Setup,);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqTrackActor_PreUpdate(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqTrackActor_PreEvaluation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqTrackActor_PostUpdate(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqTrackActor_PostEvaluation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqTrackActor_OnSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqTrackActor_OnRestoreSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqTrackActor_OnActivateTrackActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_SeqTrackActor_HasGeneralTriggerEvent(FName InEventKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_SeqTrackActor_HasGeneralRepeaterEvent(FName InEventKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqTrackActor_ChangedViewTarget(AActor* InViewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqTrackActor_AlwaysPreUpdate(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqTrackActor_AlwaysPostUpdate(float InDeltaSeconds);
    
};

