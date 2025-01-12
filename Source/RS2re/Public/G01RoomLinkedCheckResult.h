#pragma once
#include "CoreMinimal.h"
#include "G01RoomLinkParam.h"
#include "G01RoomLinkedCheckResult.generated.h"

USTRUCT(BlueprintType)
struct FG01RoomLinkedCheckResult {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01RoomLinkParam> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalWeight;
    
public:
    RS2RE_API FG01RoomLinkedCheckResult();
};

