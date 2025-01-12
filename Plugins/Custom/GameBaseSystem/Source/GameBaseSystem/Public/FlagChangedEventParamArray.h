#pragma once
#include "CoreMinimal.h"
#include "FlagChangedEventParam.h"
#include "FlagChangedEventParamArray.generated.h"

USTRUCT(BlueprintType)
struct FFlagChangedEventParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlagChangedEventParam> Array;
    
    GAMEBASESYSTEM_API FFlagChangedEventParamArray();
};

