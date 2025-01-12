#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01VisualActorSubAnimInstInterface.generated.h"

UINTERFACE(Blueprintable)
class UG01VisualActorSubAnimInstInterface : public UInterface {
    GENERATED_BODY()
};

class IG01VisualActorSubAnimInstInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_StartWarmUp(int32 InWarmUpFrames);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetRotationThresholdScale(float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_VASubAnimInst_SetDistanceThresholdScale(float InScale);
    
};

