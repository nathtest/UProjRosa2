#pragma once
#include "CoreMinimal.h"
#include "FlagAccessParam.h"
#include "FlagChangedEventReserveParam.generated.h"

USTRUCT(BlueprintType)
struct FFlagChangedEventReserveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagAccessParam MFlagParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MChangedValue;
    
    GAMEBASESYSTEM_API FFlagChangedEventReserveParam();
};

