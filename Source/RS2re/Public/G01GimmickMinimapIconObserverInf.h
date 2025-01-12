#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01GimmickMinimapIconObserverInf.generated.h"

class AG01GimmickObjectBase;

UINTERFACE(Blueprintable, MinimalAPI)
class UG01GimmickMinimapIconObserverInf : public UInterface {
    GENERATED_BODY()
};

class IG01GimmickMinimapIconObserverInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Obs_G01GimmickMinimapIcon_NotifyIconChange(const AG01GimmickObjectBase* InGimmick);
    
};

