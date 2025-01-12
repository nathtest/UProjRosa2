#pragma once
#include "CoreMinimal.h"
#include "G01DestinationDetailInfo.h"
#include "G01DestinationInfo.h"
#include "G01DestinationInfos.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01DestinationInfos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01DestinationDetailInfo MCurrentInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01DestinationInfo MPrevInfo;
    
    FG01DestinationInfos();
};

