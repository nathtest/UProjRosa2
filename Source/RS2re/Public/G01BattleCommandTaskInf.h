#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BattleCommandTaskInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleCommandTaskInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleCommandTaskInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleCommandTask_SetActionCount(int32 InUniqueID, int32 InActionCountID, int32 InActionCountNum);
    
};

