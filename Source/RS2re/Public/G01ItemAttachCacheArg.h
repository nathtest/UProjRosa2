#pragma once
#include "CoreMinimal.h"
#include "G01ItemAttachCacheArg.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ItemAttachCacheArg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> VASlotNo;
    
    FG01ItemAttachCacheArg();
};

