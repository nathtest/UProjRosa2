#pragma once
#include "CoreMinimal.h"
#include "SeqLoadAnimInfo.h"
#include "SeqLoadAnimInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FSeqLoadAnimInfoArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqLoadAnimInfo> Array;
    
    GAMEBASESYSTEM_API FSeqLoadAnimInfoArray();
};

