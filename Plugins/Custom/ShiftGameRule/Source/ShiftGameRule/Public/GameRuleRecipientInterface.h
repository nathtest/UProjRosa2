#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GameRuleRecipientInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UGameRuleRecipientInterface : public UInterface {
    GENERATED_BODY()
};

class IGameRuleRecipientInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShiftGameRule(const FName& gameRule, bool isShift);
    
};

