#pragma once
#include "CoreMinimal.h"
#include "G01SeqPlayArg_BattleAttackInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqPlayArg_BattleAttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MSourceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MTargetIndexList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> MTargetMissHitList;
    
    RS2RE_API FG01SeqPlayArg_BattleAttackInfo();
};

