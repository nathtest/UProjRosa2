#pragma once
#include "CoreMinimal.h"
#include "ETextParamType.h"
#include "TextTagPropertyParam.generated.h"

USTRUCT(BlueprintType)
struct FTextTagPropertyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETextParamType MReplaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MTargetProperty;
    
    GAMEBASESYSTEM_API FTextTagPropertyParam();
};

