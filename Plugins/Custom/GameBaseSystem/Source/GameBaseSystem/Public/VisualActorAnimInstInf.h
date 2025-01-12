#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EVisualActorAnimQuality.h"
#include "Templates/SubclassOf.h"
#include "VisualActorAnimInstInf.generated.h"

class AActor;
class UAnimInstance;
class USkeletalMeshComponent;
class UVisualActorParamDataAsset;

UINTERFACE(Blueprintable, MinimalAPI)
class UVisualActorAnimInstInf : public UInterface {
    GENERATED_BODY()
};

class IVisualActorAnimInstInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_UnlinkAnimLayerClass(TSubclassOf<UAnimInstance> InAnimClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_SetPoseCopyTarget(USkeletalMeshComponent* InCopyTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_RestoreCachedMontageParam(int32 InDefaultSlotSlotIndex, float InTransientBlendInTime, float InTransientBlendOutTime, bool InIsCacheClear);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_ResetParameters();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_LinkAnimLayerClass(TSubclassOf<UAnimInstance> InAnimClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UVisualActorParamDataAsset* Inf_VAAnimInst_GetVisualActorParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* Inf_VAAnimInst_GetOwningVisualActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EVisualActorAnimQuality Inf_VAAnimInst_GetAnimQuality();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_ForceUpdateAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_CopyMontageBySlot(FName InSlotName, USkeletalMeshComponent* InDestSkeletalMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_ChangeDefaultSlot(int32 InNextSlotIndex, bool InIsCopyLastAnim, float InBlendTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VAAnimInst_ChangeAnimLayerQuality(EVisualActorAnimQuality InQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_VAAnimInst_CacheMontageParam(int32 InCacheDefaultSlotIndex, FName& ReCacheSlotName);
    
};

