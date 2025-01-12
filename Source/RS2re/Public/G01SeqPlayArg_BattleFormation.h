#pragma once
#include "CoreMinimal.h"
#include "G01SeqPlayArg_BattleFormation.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqPlayArg_BattleFormation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MFormationId;
    
    RS2RE_API FG01SeqPlayArg_BattleFormation();
};

