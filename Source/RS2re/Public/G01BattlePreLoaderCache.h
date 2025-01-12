#pragma once
#include "CoreMinimal.h"
#include "EG01BattlePreLoaderLifeTime.h"
#include "G01BattlePreLoaderCache.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattlePreLoaderCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01BattlePreLoaderLifeTime LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CachedObjectList;
    
    FG01BattlePreLoaderCache();
};

