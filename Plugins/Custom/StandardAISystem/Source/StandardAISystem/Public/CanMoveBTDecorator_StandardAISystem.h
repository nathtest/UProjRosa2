#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "BehaviorTree/BTDecorator.h"
#include "CanMoveBTDecorator_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UCanMoveBTDecorator_StandardAISystem : public UBTDecorator {
    GENERATED_BODY()
public:
    UCanMoveBTDecorator_StandardAISystem();

};

