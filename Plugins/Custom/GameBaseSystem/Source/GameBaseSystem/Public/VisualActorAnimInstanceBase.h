#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EVisualActorAnimQuality.h"
#include "SeqActorBinder_HijackSettings.h"
#include "SequenceAnimInstOwnerInf.h"
#include "Templates/SubclassOf.h"
#include "VAAnimInstDefaultSlotParam.h"
#include "VAAnimInstLayerClassList.h"
#include "VAAnimInstSlotAnimParamCache.h"
#include "VAParamMoveControl.h"
#include "VisualActorAnimInstInf.h"
#include "VisualActorAnimInstanceBase.generated.h"

class AActor;
class IInterface;
class UInterface;
class UAnimationAsset;
class USkeletalMeshComponent;
class UVisualActorParamDataAsset;

UCLASS(Blueprintable, NonTransient)
class GAMEBASESYSTEM_API UVisualActorAnimInstanceBase : public UAnimInstance, public IVisualActorAnimInstInf, public ISequenceAnimInstOwnerInf {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVisualActorAnimQuality, FVAAnimInstLayerClassList> AnimLayerClassByQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVAAnimInstDefaultSlotParam MDefaultSlotParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PoseCopyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVisualActorAnimQuality AnimLayerQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVAAnimInstSlotAnimParamCache MAnimSlotParamCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MMoveMinValue;
    
public:
    UVisualActorAnimInstanceBase();

    UFUNCTION(BlueprintCallable)
    void SetPoseCopyTarget(USkeletalMeshComponent* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCachedDefaultSlotMontageParam(int32 InSlotIndex, float InTransientBlendInTime, float InTransientBlendOutTime, bool InIsCacheClear);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSequenceReleasedBP(const FSeqActorBinder_HijackSettings& InHijackSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSequenceControlledBP(const FSeqActorBinder_HijackSettings& InHijackSettings);
    
    UFUNCTION(BlueprintCallable)
    void InitAnimLayers();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVisualActorParamDataAsset* GetVisualActorParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVisualActorAnimQuality GetVisualActorAnimQuality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningVisualActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMoveControlParam(FVAParamMoveControl& ReMoveParam) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAnimInstance*> GetAllLinkedAnimLayerInstance(TSubclassOf<UInterface> InInterfaceClass) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateAnimation(USkeletalMeshComponent* InSkeletalMeshComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<UAnimationAsset*> FindPlayingAnimSequences(FName InSlotName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimInstance* FindLinkedAnimLayerInstance(TSubclassOf<UAnimInstance> InClass) const;
    
    UFUNCTION(BlueprintCallable)
    void ConditionalUnkinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass, bool InIsForceUnlink);
    
    UFUNCTION(BlueprintCallable)
    void ConditionalLinkAnimClassLayers(TSubclassOf<UAnimInstance> InClass, bool InIsForceLink);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeDefaultSlot(int32 InNextSlotIndex, bool InIsCopyLastAnim, float InBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAnimLayerQuality(EVisualActorAnimQuality InQuality);
    
    UFUNCTION(BlueprintCallable)
    bool CacheDefaultSlotMontageParam(int32 InCacheSlotIndex, FName& ReCacheSlotName);
    

    // Fix for true pure virtual functions not being implemented
};

