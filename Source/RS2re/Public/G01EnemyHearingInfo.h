#pragma once
#include "CoreMinimal.h"
#include "G01EnemyHearingInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01EnemyHearingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingHight;
    
    RS2RE_API FG01EnemyHearingInfo();
};

