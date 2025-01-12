#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h" //CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TargetPoint -FallbackName=TargetPoint
#include "G01AttackPoint.generated.h"

UCLASS(Blueprintable)
class RS2RE_API AG01AttackPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    AG01AttackPoint(const FObjectInitializer& ObjectInitializer);

};

