#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EG01GimmickDropItemSource.h"
#include "G01GimmickDropItemObserverInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickDropItemObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickDropItemObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickDropItem_OnGetMoney(EG01GimmickDropItemSource InSource, int32 InMoney);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickDropItem_OnGetItem(EG01GimmickDropItemSource InSource, const FName& InItemID, int32 InItemCount);
    
};

