#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TargetPoint -FallbackName=TargetPoint
#include "Engine/TargetPoint.h"
#include "RotateTargetBase_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API ARotateTargetBase_StandardAISystem : public ATargetPoint {
    GENERATED_BODY()
public:
    ARotateTargetBase_StandardAISystem(const FObjectInitializer& ObjectInitializer);

};

