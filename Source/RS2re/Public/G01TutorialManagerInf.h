#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01TutorialID.h"
#include "G01TutorialManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01TutorialManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01TutorialManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TutorialManager_RequestTutorial(FG01TutorialID InTutorialId, bool InIsForceListIn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TutorialManager_IsChecked(FG01TutorialID InTutorialId, bool& OutIsChecked);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Inf_G01TutorialManager_IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01TutorialManager_AllChecked();
    
};

