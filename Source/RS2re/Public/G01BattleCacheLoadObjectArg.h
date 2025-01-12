#pragma once
#include "CoreMinimal.h"
#include "G01BattleCacheLoadObjectArg.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct RS2RE_API FG01BattleCacheLoadObjectArg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ListLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> SoftObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> SoftClassList;
    
    FG01BattleCacheLoadObjectArg();
};

