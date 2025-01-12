#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "Slate/WidgetTransform.h" //CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetTransform -FallbackName=WidgetTransform
#include "EBattleActionNameMode.h"
#include "EBattleActionNameType.h"
#include "G01BattleActionNameUiContInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01BattleActionNameUiContInf : public UInterface {
    GENERATED_BODY()
};

class IG01BattleActionNameUiContInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleActionNameUiCont_StartLinkUIAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleActionNameUiCont_Start(FName InActionId, EBattleActionNameMode InMode, EBattleActionNameType InType, bool InIsPreset, FWidgetTransform InTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleActionNameUiCont_ForceEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleActionNameUiCont_FathomEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleActionNameUiCont_EndLinkUIAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleActionNameUiCont_End();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01BattleActionNameUiCont_CountUpLinkUIAction();
    
};

