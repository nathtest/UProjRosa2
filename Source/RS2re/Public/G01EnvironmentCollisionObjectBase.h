#pragma once
#include "CoreMinimal.h"
#include "EnvironmentCollisionObjectBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=EnvironmentCollisionObjectBase -FallbackName=EnvironmentCollisionObjectBase
#include "G01EnvironmentCollisionObjectBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01EnvironmentCollisionObjectBase : public AEnvironmentCollisionObjectBase {
    GENERATED_BODY()
public:
    AG01EnvironmentCollisionObjectBase(const FObjectInitializer& ObjectInitializer);

};

