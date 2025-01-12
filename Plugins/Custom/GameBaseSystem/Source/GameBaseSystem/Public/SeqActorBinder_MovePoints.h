#pragma once
#include "CoreMinimal.h"
#include "SeqActorBinder_MovePointParam.h"
#include "SeqActorBinder_MovePoints.generated.h"

USTRUCT(BlueprintType)
struct FSeqActorBinder_MovePoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqActorBinder_MovePointParam> MMovePoints;
    
    GAMEBASESYSTEM_API FSeqActorBinder_MovePoints();
};

