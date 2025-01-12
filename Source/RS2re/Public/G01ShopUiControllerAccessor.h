#pragma once
#include "CoreMinimal.h"
#include "UiControllerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=UiControllerAccessor -FallbackName=UiControllerAccessor
#include "G01ShopIDStruct.h"
#include "G01ShopUiControllerAccessor.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01ShopUiControllerAccessor : public UUiControllerAccessor {
    GENERATED_BODY()
public:
    UG01ShopUiControllerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestShopMenu(FG01ShopIDStruct ShopID, AActor* Actor);
    
};

