#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h"
#include "FlagChangedEventParam.generated.h"

USTRUCT(BlueprintType)
struct FFlagChangedEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MFlagAccessParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MChangedValue;
    
    GAMEBASESYSTEM_API FFlagChangedEventParam();
};

