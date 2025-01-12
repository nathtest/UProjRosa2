#pragma once
#include "CoreMinimal.h"
#include "AIMovePathPointInfo.h"
#include "SeqActorBinder_MovePointParam.generated.h"

USTRUCT(BlueprintType)
struct FSeqActorBinder_MovePointParam : public FAIMovePathPointInfo {
    GENERATED_BODY()
public:
    GAMEBASESYSTEM_API FSeqActorBinder_MovePointParam();
};

