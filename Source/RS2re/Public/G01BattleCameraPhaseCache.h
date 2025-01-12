#pragma once
#include "CoreMinimal.h"
#include "G01BattleCameraPhaseCache.generated.h"

class ASequenceController;
class UG01BattleCameraJudgeBase;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCameraPhaseCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceController* MSequenceController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01BattleCameraJudgeBase*> JudgeObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MJudgePriority;
    
    FG01BattleCameraPhaseCache();
};

