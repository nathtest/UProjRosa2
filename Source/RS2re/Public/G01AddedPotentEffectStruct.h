#pragma once
#include "CoreMinimal.h"
#include "G01AddedPotentBaseKeyStruct.h"
#include "G01AddedPotentEffectStruct.generated.h"

class UG01VFXHandle;

USTRUCT(BlueprintType)
struct FG01AddedPotentEffectStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01AddedPotentBaseKeyStruct Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplaySeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UG01VFXHandle* FxHandle;
    
    RS2RE_API FG01AddedPotentEffectStruct();
};

