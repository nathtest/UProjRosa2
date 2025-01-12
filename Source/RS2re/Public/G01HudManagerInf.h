#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01BuyableTypeEnum.h"
#include "G01FootPrintDataStruct.h"
#include "G01HudManagerInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01HudManagerInf : public UInterface {
    GENERATED_BODY()
};

class IG01HudManagerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudManager_SetPurchaseCheckResult(int32 InSelectIndex, EG01BuyableTypeEnum InBuyableType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudManager_GetPurchaseCheckResult(int32& OutSelectIndex, EG01BuyableTypeEnum& OutBuyableType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudManager_GetFootPrintData(TArray<FG01FootPrintDataStruct>& OutFootPrintDataList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudManager_ClearFootPrintData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01HudManager_AddFootPrintData(FG01FootPrintDataStruct AddFootPrintData);
    
};

