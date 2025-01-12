#pragma once
#include "CoreMinimal.h"
#include "SeqActorBinder_MovePoints.h"
#include "SeqActorBinder_AiParams.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FSeqActorBinder_AiParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqActorBinder_MovePoints> MMovePointByPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool MIsWaitAiMoveFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 MPathMovePatternIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* MBehaviorTree;
    
    GAMEBASESYSTEM_API FSeqActorBinder_AiParams();
};

