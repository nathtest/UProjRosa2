#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01LearnSkillMenuUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LearnSkillMenuUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01LearnSkillMenuUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LearnSkillMenuUiController_Open();
    
};

