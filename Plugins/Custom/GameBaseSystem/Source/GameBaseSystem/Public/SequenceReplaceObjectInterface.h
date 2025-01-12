#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SequenceReplaceObjectInterface.generated.h"

class AActor;
class UAnimInstance;
class USkeletalMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class USequenceReplaceObjectInterface : public UInterface {
    GENERATED_BODY()
};

class ISequenceReplaceObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqRepObject_NotifyReleased(UAnimInstance* InOldAnimInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqRepObject_NotifyControlled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector Inf_SeqRepObject_GetSequencerReplaceOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* Inf_SeqRepObject_GetSequencerAccessSkeletalMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_SeqRepObject_GetCustomTargetActor(int32 InSlotIndex, AActor*& ReCustomTarget);
    
};

