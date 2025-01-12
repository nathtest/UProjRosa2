#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LevelSeqAnimInstInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULevelSeqAnimInstInf : public UInterface {
    GENERATED_BODY()
};

class ILevelSeqAnimInstInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LevelSeqAnimInst_SetPhysicsEaseInTime(float InSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float Inf_LevelSeqAnimInst_GetPhysicsEaseInTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_LevelSeqAnimInst_EaseInPhysics(float InStartAlpha);
    
};

