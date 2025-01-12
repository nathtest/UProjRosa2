#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01SpellInstituteManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01SpellInstituteManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01SpellInstituteManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01SpellInstituteManagerInf_GetCompleteNum(int32& OutCompleteNum);
    
};

