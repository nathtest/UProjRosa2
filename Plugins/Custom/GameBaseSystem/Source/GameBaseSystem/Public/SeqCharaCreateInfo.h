#pragma once
#include "CoreMinimal.h"
#include "SeqUseCharaParam.h"
#include "SeqCharaCreateInfo.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqCharaCreateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeqUseCharaParam CharaParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCreateNum;
    
    FSeqCharaCreateInfo();
};

