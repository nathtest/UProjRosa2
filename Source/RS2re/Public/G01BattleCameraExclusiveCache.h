#pragma once
#include "CoreMinimal.h"
#include "G01BattleCameraExclusiveCache.generated.h"

class UG01BattleCameraJudgeBase;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCameraExclusiveCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UG01BattleCameraJudgeBase*> JudgeObjectList;
    
    FG01BattleCameraExclusiveCache();
};

