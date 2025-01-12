#pragma once
#include "CoreMinimal.h"
#include "G01BattlePreLoaderUnit.h"
#include "G01BattlePreLoaderHandleRelation.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattlePreLoaderHandleRelation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattlePreLoaderUnit Unit;
    
    FG01BattlePreLoaderHandleRelation();
};

