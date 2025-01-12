#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01AbilityCharaStatusEffect.h"
#include "G01AbilityScriptOwnerInf.generated.h"

class UG01AbilityScriptBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01AbilityScriptOwnerInf : public UInterface {
    GENERATED_BODY()
};

class IG01AbilityScriptOwnerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AbilityScript_OnDeactivate(UG01AbilityScriptBase* InScript);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AbilityScript_OnActivate(UG01AbilityScriptBase* InScript);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Owner_AbilityScript_ApplyCharaStatus(UG01AbilityScriptBase* InScript, const FG01AbilityCharaStatusEffect& InEffect);
    
};

