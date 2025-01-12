#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=BTDecorator -FallbackName=BTDecorator
#include "EComparisonOperatorType_StandardAISystem.h"
#include "CheckMoveDistance_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UCheckMoveDistance_StandardAISystem : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComparisonOperatorType_StandardAISystem ComparisonOperatorType;
    
    UCheckMoveDistance_StandardAISystem();

};

