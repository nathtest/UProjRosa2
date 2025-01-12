#pragma once
#include "CoreMinimal.h"
#include "SeqActorSlotIndexList.generated.h"

USTRUCT(BlueprintType)
struct FSeqActorSlotIndexList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MSlotIndexList;
    
    GAMEBASESYSTEM_API FSeqActorSlotIndexList();
};

