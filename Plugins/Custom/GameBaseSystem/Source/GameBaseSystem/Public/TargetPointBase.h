#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TargetPoint -FallbackName=TargetPoint
#include "Engine/TargetPoint.h"
#include "TargetPointBase.generated.h"

UCLASS(Blueprintable)
class GAMEBASESYSTEM_API ATargetPointBase : public ATargetPoint {
    GENERATED_BODY()
public:
    ATargetPointBase(const FObjectInitializer& ObjectInitializer);

};

