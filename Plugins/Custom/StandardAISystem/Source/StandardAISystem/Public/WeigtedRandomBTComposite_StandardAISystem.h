#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTCompositeNode -FallbackName=BTCompositeNode
#include "BehaviorTree/BTCompositeNode.h"
#include "WeigtedRandomParamStruct_StandardAISystem.h"
#include "WeigtedRandomBTComposite_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UWeigtedRandomBTComposite_StandardAISystem : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeigtedRandomParamStruct_StandardAISystem> MRateList;
    
    UWeigtedRandomBTComposite_StandardAISystem();

};

