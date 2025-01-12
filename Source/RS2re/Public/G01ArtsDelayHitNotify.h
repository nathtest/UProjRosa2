#pragma once
#include "CoreMinimal.h"
#include "G01SeqNotifyBattleDamageParam.h"
#include "G01ArtsDelayHitNotify.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ArtsDelayHitNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TargetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01SeqNotifyBattleDamageParam SeqParam;
    
    FG01ArtsDelayHitNotify();
};

