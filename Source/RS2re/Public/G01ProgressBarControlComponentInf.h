#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ProgressBarControlComponentInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ProgressBarControlComponentInf : public UInterface {
    GENERATED_BODY()
};

class IG01ProgressBarControlComponentInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ProgressBarControlComponent_SetTurningPointCount(int32 InCurrent, int32 InPrev, int32 InMax, bool InIsImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ProgressBarControlComponent_SetPercentage(const float& In, bool InIsImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ProgressBarControlComponent_GetPercentage(float& Out);
    
};

