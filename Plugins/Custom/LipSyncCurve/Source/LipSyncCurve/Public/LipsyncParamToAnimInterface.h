#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "LipsyncParam.h"
#include "LipsyncParamToAnimInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULipsyncParamToAnimInterface : public UInterface {
    GENERATED_BODY()
};

class ILipsyncParamToAnimInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateLipsyncParamToAnim(const FLipsyncParam& Visemes);
    
};

