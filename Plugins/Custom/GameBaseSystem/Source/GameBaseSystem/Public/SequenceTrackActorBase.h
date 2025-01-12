#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumberRange -FallbackName=FrameNumberRange
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvaluationOperand -FallbackName=MovieSceneEvaluationOperand
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "AppActor.h"
#include "SeqGeneralEventParam.h"
#include "SeqPlayArguments.h"
#include "SequenceTrackActorInf.h"
#include "Evaluation/MovieSceneEvaluationOperand.h"
#include "MovieSceneObjectBindingID.h" // Add this include
#include "SequenceTrackActorBase.generated.h"

class AActor;
class ASequenceController;
class UCustomLevelSequencePlayer;
class USequenceResources;

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ASequenceTrackActorBase : public AAppActor, public ISequenceTrackActorInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCustomLevelSequencePlayer* MSequencePlayer;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationOperand MOperand;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsEndTriggerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MEndDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool MIsActiveTrackActor;
    
public:
    ASequenceTrackActorBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreUpdateBP(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreEvaluationBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostUpdateBP(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostEvaluationBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGeneralTriggerEventBP(const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void OnGeneralTriggerEvent(const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndGeneralRepeaterEventBP(const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    void OnEndGeneralRepeaterEvent(const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDestroyTrackActor(bool InIsEditor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivateTrackActorBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedViewTargetBP(AActor* InViewTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginGeneralRepeaterEventBP(const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable)
    bool OnBeginGeneralRepeaterEvent(const FSeqGeneralEventParam& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlwaysPreUpdateBP(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlwaysPostUpdateBP(float InDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateTrackActorBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndTriggerActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USequenceResources* GetSequenceResource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCustomLevelSequencePlayer* GetSequencePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASequenceController* GetSequenceController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEndDelayTime() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* FindBindingActor(const FMovieSceneObjectBindingID& InBindingID) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Cmd_TR_GeneralTriggerEvent(FSeqGeneralEventParam InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSeqPlayArguments Cmd_SQ_GetPlayArguments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Cmd_SA_IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void Cmd_SA_FindGeneralRepeaterEventRange(FName InEventKey, bool& ReIsFound, TArray<FFrameNumberRange>& ReFoundRangeList);
    
    UFUNCTION(BlueprintCallable)
    void Cmd_RP_GeneralRepeaterEvent(FSeqGeneralEventParam InParam);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void Inf_SeqTrackActor_Setup(UCustomLevelSequencePlayer* InSequencePlayer, const FMovieSceneEvaluationOperand& InOperand) override PURE_VIRTUAL(Inf_SeqTrackActor_Setup,);
    
};

