#pragma once
#include "CoreMinimal.h"
#include "SeqActorSlotArg.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSeqActorSlotArg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MTargetActor;
    
    GAMEBASESYSTEM_API FSeqActorSlotArg();
};

