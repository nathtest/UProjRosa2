#pragma once
#include "CoreMinimal.h"
#include "G01CrowdEncountInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01CrowdEncountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrowdRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CrowdCount;
    
    RS2RE_API FG01CrowdEncountInfo();
};

