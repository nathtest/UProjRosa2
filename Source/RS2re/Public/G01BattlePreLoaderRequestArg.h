#pragma once
#include "CoreMinimal.h"
#include "EG01BattlePreLoaderLifeTime.h"
#include "G01BattlePreLoaderRequestArg.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattlePreLoaderRequestArg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattlePreLoaderLifeTime LifeTime;
    
    FG01BattlePreLoaderRequestArg();
};

