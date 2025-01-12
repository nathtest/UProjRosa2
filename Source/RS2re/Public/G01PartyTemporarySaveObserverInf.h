#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01PartyTemporarySaveObserverInf.generated.h"

class UG01PartyInfoGISubsystem;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01PartyTemporarySaveObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01PartyTemporarySaveObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyTemporarySave_Push(UG01PartyInfoGISubsystem* InPartySubSystem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_PartyTemporarySave_Pop(UG01PartyInfoGISubsystem* InPartySubSystem);
    
};

