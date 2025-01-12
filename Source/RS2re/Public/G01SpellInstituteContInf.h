#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SpellInstituteContInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SpellInstituteContInf : public UInterface {
    GENERATED_BODY()
};

class IG01SpellInstituteContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SpellInstituteCont_RequestOpen(AActor* InRequestActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SpellInstituteCont_RequestForceClose();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SpellInstituteCont_Back(bool isDeveloping);
    
};

