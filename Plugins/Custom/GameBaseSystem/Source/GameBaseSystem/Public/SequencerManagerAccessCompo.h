#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ManagerAccessor.h"
#include "OnSequencerPlayFinishedScriptDelegate.h"
#include "OnSequencerPlayStartScriptDelegate.h"
#include "SeqActorSlotBinderArgs.h"
#include "SeqCameraBinderArgument.h"
#include "SeqCategoryView.h"
#include "SequenceLoadSettings.h"
#include "Templates/SubclassOf.h"
#include "SequencerManagerAccessCompo.generated.h"

class AActor;
class ASequenceController;
class ULevelSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEBASESYSTEM_API USequencerManagerAccessCompo : public UManagerAccessor {
    GENERATED_BODY()
public:
    USequencerManagerAccessCompo(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbindDelegateSequenceStart(const FOnSequencerPlayStartScript& InEvent);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateSequenceFinished(const FOnSequencerPlayFinishedScript& InEvent);
    
    UFUNCTION(BlueprintCallable)
    ASequenceController* RequestLevelSequence(TSoftObjectPtr<ULevelSequence> InSequencerAsset, int32 InPlayCount, bool InIsAutoDestroy, AActor* InPlayOriginActor, FTransform InPlayOriginTransform, FSeqActorSlotBinderArgs InActorSlotBinderArg, FSeqCameraBinderArgument InCameraBinderArg, FSequenceLoadSettings InLoadSettings, TSubclassOf<ASequenceController> InUseSeqContClass, bool InIsUseLevelTransitionQueue, bool InIsCreateNewInstance, bool InIsUseLoadFade);
    
    UFUNCTION(BlueprintCallable)
    void PlaySequencersByCondition(int32 InCondition);
    
    UFUNCTION(BlueprintCallable)
    void PlaySequencersByCategory(FSeqCategoryView InCategory);
    
    UFUNCTION(BlueprintCallable)
    void PauseSequencersByCondition(int32 InCondition, bool InIsPauseCharaAnimation);
    
    UFUNCTION(BlueprintCallable)
    void PauseSequencersByCategory(FSeqCategoryView InCategory, bool InIsPauseCharaAnimation);
    
    UFUNCTION(BlueprintCallable)
    void IsPlayingAny(bool& OutIsPlaying);
    
    UFUNCTION(BlueprintCallable)
    void IsAnySequencePlayingByCategory(const TArray<FSeqCategoryView>& InCategoryList, bool& OutIsPlaying);
    
    UFUNCTION(BlueprintCallable)
    void IsAnySequenceLoadingByCategory(const TArray<FSeqCategoryView>& InCategoryList, bool& ReIsLoading);
    
    UFUNCTION(BlueprintCallable)
    void IsAnySequenceLoading(bool& ReIsLoading);
    
    UFUNCTION(BlueprintCallable)
    TArray<ASequenceController*> GetSequenceControllers();
    
    UFUNCTION(BlueprintCallable)
    void FindSeqControllerByCondition(int32 InCondition, TArray<ASequenceController*>& OutSeqControllers);
    
    UFUNCTION(BlueprintCallable)
    void FindSeqControllerByCategory(FSeqCategoryView InCategory, TArray<ASequenceController*>& OutSeqControllers);
    
    UFUNCTION(BlueprintCallable)
    void EndSequencersByCondition(int32 InCondition);
    
    UFUNCTION(BlueprintCallable)
    void EndSequencersByCategory(FSeqCategoryView InCategory);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateSequenceStart(const FOnSequencerPlayStartScript& InEvent);
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateSequenceFinished(const FOnSequencerPlayFinishedScript& InEvent);
    
};

