#pragma once
#include "CoreMinimal.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AbilityAilmentStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityAilmentStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentBaseKeyStruct AddedPotentKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDuplicate;
    
    FG01AbilityAilmentStruct();
};

