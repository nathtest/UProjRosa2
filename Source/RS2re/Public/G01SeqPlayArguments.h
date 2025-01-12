#pragma once
#include "CoreMinimal.h"
#include "G01SeqPlayArg_Battle.h"
#include "G01SeqPlayArguments.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqPlayArguments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqPlayArg_Battle MBattleArgs;
    
    RS2RE_API FG01SeqPlayArguments();
};

