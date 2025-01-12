#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ExpManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ExpManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ExpManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ExpManager_CalcArtsLevel(const int32& InExp, int32& OutArtsLevel);
    
};

