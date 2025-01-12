#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01TextLanguageID.h"
#include "G01LanguageSwitcherWidgetInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01LanguageSwitcherWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class IG01LanguageSwitcherWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LanguageSwitcherWidget_IsSkip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LanguageSwitcherWidget_ChangeLanguage(FG01TextLanguageID LanguageID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01LanguageSwitcherWidget_AnimAction(FName InFunctionName);
    
};

