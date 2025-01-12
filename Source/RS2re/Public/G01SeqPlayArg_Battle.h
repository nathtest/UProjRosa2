#pragma once
#include "CoreMinimal.h"
#include "G01SeqPlayArg_BattleArts.h"
#include "G01SeqPlayArg_BattleAttackInfo.h"
#include "G01SeqPlayArg_BattleEncount.h"
#include "G01SeqPlayArg_BattleFormation.h"
#include "G01SeqPlayArg_BattleLoadArtsInfo.h"
#include "G01SeqPlayArg_Battle.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqPlayArg_Battle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqPlayArg_BattleEncount MEncount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqPlayArg_BattleFormation MFormation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqPlayArg_BattleLoadArtsInfo MLoadArtsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqPlayArg_BattleArts MArts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SeqPlayArg_BattleAttackInfo> MAttackInfoList;
    
    RS2RE_API FG01SeqPlayArg_Battle();
};

