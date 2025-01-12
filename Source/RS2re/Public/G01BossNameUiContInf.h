#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01BossNameUIContTableKeyStruct.h"
#include "G01BossNameUiContInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BossNameUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01BossNameUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BossNameUiCont_UnLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BossNameUiCont_Start(FG01BossNameUIContTableKeyStruct InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BossNameUiCont_Load();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BossNameUiCont_End();
    
};

