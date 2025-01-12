#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01TutorialID.h"
#include "G01TutorialParamRow.h"
#include "G01TutorialUiContInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01TutorialUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01TutorialUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TutorialUiCont_OpenTutorialWindow(const FG01TutorialID& InTutorialId, const FG01TutorialParamRow& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TutorialUiCont_CloseTutorialWindow();
    
};

