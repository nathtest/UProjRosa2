#pragma once
#include "CoreMinimal.h"
#include "G01BattleArtsHitSlomoSetting.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleArtsHitSlomoSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DurationFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlomoRate;
    
    FG01BattleArtsHitSlomoSetting();
};

