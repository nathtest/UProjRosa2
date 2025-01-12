#pragma once
#include "CoreMinimal.h"
#include "EG01TextTagType.h"
#include "G01TextTagArray.h"
#include "G01TextTagAll.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TextTagAll {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EG01TextTagType, FG01TextTagArray> TagsByType;
    
    FG01TextTagAll();
};

