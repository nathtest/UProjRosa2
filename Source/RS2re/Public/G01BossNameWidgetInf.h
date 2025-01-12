#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BossNameWidgetInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BossNameWidgetInf : public UInterface {
    GENERATED_BODY()
};

class IG01BossNameWidgetInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BossNameWidget_SetText(const FText& InFrontText, const FText& InBackText, const FText& InSpeciesText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BossNameWidget_SetRenderPos(bool InLeftUpper);
    
};

