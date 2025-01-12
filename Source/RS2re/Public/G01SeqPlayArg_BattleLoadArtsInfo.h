#pragma once
#include "CoreMinimal.h"
#include "EBattleActionNameType.h"
#include "G01SeqPlayArg_BattleLoadArtsInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqPlayArg_BattleLoadArtsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MArtsId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleActionNameType MType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MArtsRank;
    
    RS2RE_API FG01SeqPlayArg_BattleLoadArtsInfo();
};

