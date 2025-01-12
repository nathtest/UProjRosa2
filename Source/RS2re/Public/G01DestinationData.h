#pragma once
#include "CoreMinimal.h"
#include "G01DestinationInfos.h"
#include "G01DestinationData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01DestinationData : public FG01DestinationInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MPriority;
    
    FG01DestinationData();
};

