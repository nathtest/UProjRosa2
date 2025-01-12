#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTCompositeNode -FallbackName=BTCompositeNode
#include "BehaviorTree/BTCompositeNode.h"
#include "ForceSequenceBTComposite_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UForceSequenceBTComposite_StandardAISystem : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UForceSequenceBTComposite_StandardAISystem();

};

