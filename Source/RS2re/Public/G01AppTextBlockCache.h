#pragma once
#include "CoreMinimal.h"
#include "G01TextFindArgs.h"
#include "G01AppTextBlockCache.generated.h"

USTRUCT(BlueprintType)
struct FG01AppTextBlockCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextFindArgs Args;
    
    RS2RE_API FG01AppTextBlockCache();
};

