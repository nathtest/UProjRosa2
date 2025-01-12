#pragma once
#include "CoreMinimal.h"
#include "AIControllerBase.h" //CROSS-MODULE INCLUDE V2: -ModuleName=GameBaseSystem -ObjectName=AIControllerBase -FallbackName=AIControllerBase
#include "G01AIControllerBase.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01AIControllerBase : public AAIControllerBase {
    GENERATED_BODY()
public:
    AG01AIControllerBase(const FObjectInitializer& ObjectInitializer);

};

