#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SpellInstituteContObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SpellInstituteContObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01SpellInstituteContObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SpellInstituteCont_Open();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SpellInstituteCont_FinishedOpen();
    
};

