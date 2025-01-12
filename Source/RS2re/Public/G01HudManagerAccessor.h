#pragma once
#include "CoreMinimal.h"
#include "ManagerAccessor.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=ManagerAccessor -FallbackName=ManagerAccessor
#include "EG01BuyableTypeEnum.h"
#include "G01HudManagerAccessor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class RS2RE_API UG01HudManagerAccessor : public UManagerAccessor {
    GENERATED_BODY()
public:
    UG01HudManagerAccessor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPurchaseCheckResult(int32 OutSelectIndex, EG01BuyableTypeEnum OutBuyableType);
    
    UFUNCTION(BlueprintCallable)
    void GetPurchaseCheckResult(int32& OutSelectIndex, EG01BuyableTypeEnum& OutBuyableType);
    
};

