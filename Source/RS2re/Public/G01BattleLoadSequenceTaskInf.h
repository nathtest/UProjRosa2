#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleLoadSequenceTaskInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleLoadSequenceTaskInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleLoadSequenceTaskInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleLoadSequenceTask_SetLoadSequenceID(const FName& InID);
    
};

