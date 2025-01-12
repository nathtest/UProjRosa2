#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ProgressBarRepeatComponentInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ProgressBarRepeatComponentInf : public UInterface {
    GENERATED_BODY()
};

class IG01ProgressBarRepeatComponentInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ProgressBarRepeatComponent_SetTurningPointCount(int32 InCurrent, int32 InPrev, int32 InMax, int32 InGaugeIndex, bool InIsImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ProgressBarRepeatComponent_SetPercentage(const float& In, int32 InGaugeIndex, bool InIsImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ProgressBarRepeatComponent_GetPercentage(float& Out, int32 InGaugeIndex);
    
};

