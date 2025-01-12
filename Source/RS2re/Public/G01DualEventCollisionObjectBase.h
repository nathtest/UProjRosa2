#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=CollisionObjectBase -FallbackName=CollisionObjectBase
#include "G01DualEventCollisionObjectBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01DualEventCollisionObjectBase : public ACollisionObjectBase {
    GENERATED_BODY()
public:
    AG01DualEventCollisionObjectBase(const FObjectInitializer& ObjectInitializer);

};

