#pragma once
#include "CoreMinimal.h"
#include "SeqActorSlotArg.h"
#include "SeqActorSlotBinderArgs.generated.h"

USTRUCT(BlueprintType)
struct FSeqActorSlotBinderArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqActorSlotArg> MActorSlotArgs;
    
    GAMEBASESYSTEM_API FSeqActorSlotBinderArgs();
};

