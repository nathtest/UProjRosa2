#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleTaskInf.generated.h"

class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleTaskInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleTaskInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleTask_AddOwner(UObject* InOwner);
    
};

