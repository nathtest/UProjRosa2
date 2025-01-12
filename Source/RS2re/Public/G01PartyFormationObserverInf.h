#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01PartyFormationData.h"
#include "G01PartyFormationObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PartyFormationObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01PartyFormationObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyFormation_SwapFormation(const FG01PartyFormationData& InMain, const FG01PartyFormationData& InSub);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyFormation_IsAutoFormation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyFormation_ChangeSubFormation(const FG01PartyFormationData& InCurrent, const FG01PartyFormationData& InPrev);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyFormation_ChangeMainFormation(const FG01PartyFormationData& InCurrent, const FG01PartyFormationData& InPrev);
    
};

