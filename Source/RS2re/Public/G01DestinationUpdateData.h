#pragma once
#include "CoreMinimal.h"
#include "G01DestinationData.h"
#include "G01DestinationUpdateData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01DestinationUpdateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01DestinationData MData;
    
    FG01DestinationUpdateData();
};

