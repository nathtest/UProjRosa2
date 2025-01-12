#pragma once
#include "CoreMinimal.h"
#include "EG01AddedPotentCureTimingEnum.h"
#include "EG01AddedPotentEnhanceTypeEnum.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentEnhanceStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AddedPotentEnhanceStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentBaseKeyStruct Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01AddedPotentEnhanceTypeEnum EnhanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EG01AddedPotentCureTimingEnum CureTiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUnique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHidden;
    
    FG01AddedPotentEnhanceStruct();
};

