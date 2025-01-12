#pragma once
#include "CoreMinimal.h"
#include "SeqCharaCreateInfo.h"
#include "SeqCharaCreateInfoList.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqCharaCreateInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqCharaCreateInfo> CreateCharaList;
    
    FSeqCharaCreateInfoList();
};

