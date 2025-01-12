#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EVisualActorMoveType.h"
#include "EVisualActorPartialPhysicsType.h"
#include "VisualActorSubAnimInstInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UVisualActorSubAnimInstInf : public UInterface {
    GENERATED_BODY()
};

class IVisualActorSubAnimInstInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetVelocityZ(const float InVelocityZ);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetVelocityRatio(const float InVelocityRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetPhysicsMasterAlpha(float InMasterPhysicsAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetPhysicsAlpha(float InPhysicsAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetPartialPhysicsAlpha(EVisualActorPartialPhysicsType InType, float InAlpha);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetMoveTypeLeftRight(EVisualActorMoveType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetMoveTypeFrontBack(EVisualActorMoveType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetMoveSpeed(const float InMoveSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetMaxMoveSpeed(const float InMaxMoveSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetEyeOffset(const FVector2D& InEyeOffset);
    
};

