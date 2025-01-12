#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EDebugMainGameLogUsageType.h"
#include "G01DebugSystemLogSubWindowInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01DebugSystemLogSubWindowInf : public UInterface {
    GENERATED_BODY()
};

class IG01DebugSystemLogSubWindowInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01DebugSystemLogSubWindow_GetCheckBox(EDebugMainGameLogUsageType InUsage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01DebugSystemLogSubWindow_BreakBenderCheckBox();
    
};

