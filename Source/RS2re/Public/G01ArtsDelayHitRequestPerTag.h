#pragma once
#include "CoreMinimal.h"
#include "G01ArtsDelayHitRequest.h"
#include "G01ArtsDelayHitRequestPerTag.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ArtsDelayHitRequestPerTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01ArtsDelayHitRequest> RequestList;
    
    FG01ArtsDelayHitRequestPerTag();
};

