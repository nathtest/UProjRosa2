#pragma once
#include "CoreMinimal.h"
#include "G01BattlePartyResultPoseStartRange.generated.h"

USTRUCT(BlueprintType)
struct FG01BattlePartyResultPoseStartRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeMax;
    
    RS2RE_API FG01BattlePartyResultPoseStartRange();
};

