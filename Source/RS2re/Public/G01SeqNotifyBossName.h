#pragma once
#include "CoreMinimal.h"
#include "G01BossNameUIContTableKeyStruct.h"
#include "G01SeqNotifyBossName.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqNotifyBossName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01BossNameUIContTableKeyStruct BossID;
    
    RS2RE_API FG01SeqNotifyBossName();
};

