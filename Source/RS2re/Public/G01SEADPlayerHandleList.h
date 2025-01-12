#pragma once
#include "CoreMinimal.h"
#include "G01SEADPlayerHandle.h"
#include "G01SEADPlayerHandleList.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01SEADPlayerHandleList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01SEADPlayerHandle> HandleList;
    
    FG01SEADPlayerHandleList();
};

