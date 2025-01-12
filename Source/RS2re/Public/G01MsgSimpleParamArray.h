#pragma once
#include "CoreMinimal.h"
#include "G01MsgSimpleParam.h"
#include "G01MsgSimpleParamArray.generated.h"

USTRUCT(BlueprintType)
struct FG01MsgSimpleParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01MsgSimpleParam> MParams;
    
    RS2RE_API FG01MsgSimpleParamArray();
};

