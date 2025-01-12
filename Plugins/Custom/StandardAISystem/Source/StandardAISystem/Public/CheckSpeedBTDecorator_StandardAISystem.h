#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "EComparisonOperatorType_StandardAISystem.h"
#include "CheckSpeedBTDecorator_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UCheckSpeedBTDecorator_StandardAISystem : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperatorType_StandardAISystem MComparisonOperatorType;
    
    UCheckSpeedBTDecorator_StandardAISystem();

};

