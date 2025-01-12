#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01TutorialID.h"
#include "G01TutorialUiControllerObserverInf.generated.h"

UINTERFACE(Blueprintable)
class UG01TutorialUiControllerObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01TutorialUiControllerObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01TutorialUi_OnOpened(const FG01TutorialID& InTutorialId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01TutorialUi_OnClosed(const FG01TutorialID& InTutorialId);
    
};

