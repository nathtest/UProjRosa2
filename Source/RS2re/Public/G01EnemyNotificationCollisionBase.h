#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=CollisionObjectBase -FallbackName=CollisionObjectBase
#include "G01EnemyNotificationCollisionBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01EnemyNotificationCollisionBase : public ACollisionObjectBase {
    GENERATED_BODY()
public:
    AG01EnemyNotificationCollisionBase(const FObjectInitializer& ObjectInitializer);

};

