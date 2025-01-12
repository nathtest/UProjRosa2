#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EPathMoveState.h"
#include "AiMoveUserInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UAiMoveUserInf : public UInterface {
    GENERATED_BODY()
};

class IAiMoveUserInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_AiMoveUser_OnFinish(EPathMoveState InMoveState);
    
};

