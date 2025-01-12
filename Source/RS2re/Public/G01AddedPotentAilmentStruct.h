#pragma once
#include "CoreMinimal.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentAilmentStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01AddedPotentAilmentStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentBaseKeyStruct Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinuationTurnCount;
    
    RS2RE_API FG01AddedPotentAilmentStruct();
};

