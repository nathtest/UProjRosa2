#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EMoveToOffsetType_StandardAISystem.h"
#include "MoveToBaseBTTask_StandardAISystem.h"
#include "TargetMoveToBTTask_StandardAISystem.generated.h"

UCLASS(Blueprintable)
class STANDARDAISYSTEM_API UTargetMoveToBTTask_StandardAISystem : public UMoveToBaseBTTask_StandardAISystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMoveToOffsetType_StandardAISystem OffsetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToleranceDistance;
    
    UTargetMoveToBTTask_StandardAISystem();

};

