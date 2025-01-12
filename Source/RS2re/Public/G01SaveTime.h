#pragma once
#include "CoreMinimal.h"
#include "G01SaveTime.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SaveTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seconds;
    
    FG01SaveTime();
};

