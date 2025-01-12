#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "G01EnemyNotificationCollisionNotifyParam.h"
#include "G01EnemyNotificationCollisionObjectBaseInf.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UG01EnemyNotificationCollisionObjectBaseInf : public UInterface {
    GENERATED_BODY()
};

class IG01EnemyNotificationCollisionObjectBaseInf : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Inf_NotifyOnBeginOverlap(FG01EnemyNotificationCollisionNotifyParam notifyParam);
    
};

