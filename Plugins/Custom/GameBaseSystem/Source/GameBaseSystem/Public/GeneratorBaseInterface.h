#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GeneratorBaseInterface.generated.h"

class AGeneratePoint;

UINTERFACE(Blueprintable, MinimalAPI)
class UGeneratorBaseInterface : public UInterface {
    GENERATED_BODY()
};

class IGeneratorBaseInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_Generator_UpdateTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_Generator_SetLockTransformUpdate(bool InIsLock);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AGeneratePoint* Inf_Generator_FindGeneratePoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_Generator_CheckGenerateCondition(bool& OutIsValid);
    
};

