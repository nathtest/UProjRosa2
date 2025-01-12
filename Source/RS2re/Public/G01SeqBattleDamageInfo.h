#pragma once
#include "CoreMinimal.h"
#include "G01SeqBattleDamageInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqBattleDamageInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MIsSingleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTargetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MTargetIndexList;
    
public:
    RS2RE_API FG01SeqBattleDamageInfo();
};

