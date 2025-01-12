#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01DevelopSpellParameterStruct.h"
#include "G01SpellInstituteManagerObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SpellInstituteManagerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01SpellInstituteManagerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01SpellInstituteManager_GetDevelopSpellParameter(const FName InSpellID, FG01DevelopSpellParameterStruct& ReDevelopSpellParameter);
    
};

