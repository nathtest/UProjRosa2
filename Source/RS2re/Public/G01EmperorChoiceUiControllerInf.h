#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01EmperorSuccessionType.h"
#include "G01CharacterID.h"
#include "G01EmperorChoiceUiControllerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01EmperorChoiceUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01EmperorChoiceUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01EmperorChoiceOpenRequest(EG01EmperorSuccessionType SuccesionType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01EmperorChoiceOpen_SetDebugFlag(bool DebugFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01EmperorChoiceOpen_GetDebugFlag(bool& DebugFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01EmperorChoiceOpen_ClearDebugCharaList();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01EmperorChoiceOpen_AddDebugChara(FG01CharacterID AddCharaID);
    
};

