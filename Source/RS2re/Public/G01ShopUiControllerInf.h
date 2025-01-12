#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01ShopFlagIDStruct.h"
#include "G01ShopIDStruct.h"
#include "G01ShopUiControllerInf.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01ShopUiControllerInf : public UInterface {
    GENERATED_BODY()
};

class IG01ShopUiControllerInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ShopMenu_SetFlag(FG01ShopFlagIDStruct ShopFlagID, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_G01ShopMenu_OpenRequest(FG01ShopIDStruct ShopID, AActor* ActorComponent);
    
};

