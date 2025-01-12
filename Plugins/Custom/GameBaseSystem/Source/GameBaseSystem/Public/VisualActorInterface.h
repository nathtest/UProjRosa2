#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERelativeTransformSpace -FallbackName=ERelativeTransformSpace
#include "EVisualActorPartialPhysicsType.h"
#include "VAPartsKey.h"
#include "VASkeletalPartsInfo.h"
#include "VisualActorAttachmentStruct.h"
#include "VisualActorDefaultAttachmentStruct.h"
#include "VisualActorID.h"
#include "VisualActorInterface.generated.h"

class AActor;
class AVisualActor;
class UAnimInstance;
class UAnimMontage;
class UAnimSequence;
class UAppControlRig;
class UObject;
class USkeletalMesh;
class USkeletalMeshComponent;
class UVisualActorParamDataAsset;

UINTERFACE(Blueprintable, MinimalAPI)
class UVisualActorInterface : public UInterface {
    GENERATED_BODY()
};

class IVisualActorInterface : public IInterface {
    GENERATED_BODY()
public:


    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_UnregisterRelatedObjects(const TArray<UObject*>& InRelatedObjects);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_StartDisintegration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_SetSkeletalMeshComponentVisibility(const TSoftObjectPtr<USkeletalMesh>& InSkeletalMesh, bool Invisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_SetPhysicsEaseInTime(float InSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_SetPhysicsAlpha(float InAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_SetPartialPhysicsAlpha(EVisualActorPartialPhysicsType InType, float InAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_SetDitherRate(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_SetDisintegrationRate(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_SetAttachmentVisible(FName InKeyName, bool InIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_ResetVisualActorParams();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_RegisterRelatedObjects(const TArray<UObject*>& InRelatedObjects);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* Inf_VisualActor_PlayAnimation(UAnimSequence* InAnimation, FName InAnimSlotName, float InBlendInTime, float InBlendOutTime, float InInPlayRate, int32 InLoopCount, float InBlendOutTriggerTime, float InTimeToStartMontageAt);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_OnPreEvalControlRig_AnyThread(UAppControlRig* InControlRig);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_OnPostEvalControlRig_AnyThread(UAppControlRig* InControlRig);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_NotifyGeneralString(const TArray<FString>& InStringList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVisualActorID Inf_VisualActor_GetVisualActorID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FBox Inf_VisualActor_GetVisualActorBounds();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_VisualActor_GetPhysicsMasterAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_VisualActor_GetPhysicsEaseInTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_VisualActor_GetPhysicsAlpha();
    
    //UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    //void Inf_VisualActor_GetPartsTransform(FVAPartsKey InKey, TEnumAsByte<ERelativeTransformSpace> InSpace, bool& ReIsValid, FTransform& RePartsTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_GetPartsInfo(FVAPartsKey InKey, bool& ReIsValid, FVASkeletalPartsInfo& RePartsInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_VisualActor_GetPartialPhysicsAlpha(EVisualActorPartialPhysicsType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UVisualActorParamDataAsset* Inf_VisualActor_GetParamDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AVisualActor* Inf_VisualActor_GetAttachmentVisualActor(FName InKeyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> Inf_VisualActor_GetAppendEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimInstance* Inf_VisualActor_GetAnimInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_FindAttachmentVisualActorData(bool& OutIsFound, FVisualActorAttachmentStruct& OutData, FName InKeyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_FindAttachmentDefaultData(bool& OutIsFound, FVisualActorDefaultAttachmentStruct& OutData, FName InKeyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_EnableTick(bool InEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_EaseInPhysics(float InStartAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AVisualActor* Inf_VisualActor_DetachAttachment(FName InKeyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_ClearDisintegration();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VisualActor_AttachAttachment(FName InKeyName, AVisualActor* InVisualActor, FName InSocketName, FName InTagName, bool InIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* Inf_VisualActer_GetRootSkeletalMesh();
    
};

