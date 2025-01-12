#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "FlagAccessParam.h"
#include "FlagIDListViewStruct.h"
#include "FlagSystemObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UFlagSystemObserverInf : public UInterface {
    GENERATED_BODY()
};

class IFlagSystemObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_FlagSystem_OnPostSetupData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_FlagSystem_OnPostChangeValue(const FFlagAccessParam& InAccessParam, const FFlagIDListViewStruct& InFlagID, bool InOldValue, bool InCurrentValue, bool& Unuse);
    
};

