#pragma once
#include "CoreMinimal.h"
#include "G01BattleSetupData.h"
#include "G01SeqNotifyBattleStartData.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyBattleStartData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BattleSetupData MSetupData;
    
    RS2RE_API FG01SeqNotifyBattleStartData();
};

