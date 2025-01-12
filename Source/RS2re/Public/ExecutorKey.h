#pragma once
#include "CoreMinimal.h"
#include "ExecutorKey.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FExecutorKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ExecutorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* InterfaceType;
    
    FExecutorKey();
};

