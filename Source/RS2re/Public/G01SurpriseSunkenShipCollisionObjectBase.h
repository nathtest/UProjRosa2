#pragma once
#include "CoreMinimal.h"
#include "CollisionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=CollisionObjectBase -FallbackName=CollisionObjectBase
#include "G01SurpriseSunkenShipCollisionObjectBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01SurpriseSunkenShipCollisionObjectBase : public ACollisionObjectBase {
    GENERATED_BODY()
public:
    AG01SurpriseSunkenShipCollisionObjectBase(const FObjectInitializer& ObjectInitializer);

};

