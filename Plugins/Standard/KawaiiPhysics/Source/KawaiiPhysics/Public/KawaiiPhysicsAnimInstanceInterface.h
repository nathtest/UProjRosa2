#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "KawaiiPhysicsAnimInstanceInterface.generated.h"

UINTERFACE(Blueprintable)
class UKawaiiPhysicsAnimInstanceInterface : public UInterface {
    GENERATED_BODY()
};

class IKawaiiPhysicsAnimInstanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_KawaiiPhysicsAnimInstance_IsOverrideWarmUpFrames();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_KawaiiPhysicsAnimInstance_IsOverrideNodeAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_KawaiiPhysicsAnimInstance_IsOverrideNeedWarmUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 Inf_KawaiiPhysicsAnimInstance_GetWarmUpFrames();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_KawaiiPhysicsAnimInstance_GetTeleportRotationThresholdScale();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_KawaiiPhysicsAnimInstance_GetTeleportDistanceThresholdScale();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_KawaiiPhysicsAnimInstance_GetNodeAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_KawaiiPhysicsAnimInstance_GetNeedWarmUp();
    
};

