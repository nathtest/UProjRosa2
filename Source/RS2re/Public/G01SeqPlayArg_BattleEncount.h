#pragma once
#include "CoreMinimal.h"
#include "G01SeqPlayArg_BattleEncount.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqPlayArg_BattleEncount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MAdvantageLevel;
    
    RS2RE_API FG01SeqPlayArg_BattleEncount();
};

