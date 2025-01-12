#pragma once
#include "CoreMinimal.h"
#include "G01MsgWindowParam.h"
#include "G01MsgWindowParamArray.generated.h"

USTRUCT(BlueprintType)
struct FG01MsgWindowParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01MsgWindowParam> MParams;
    
    RS2RE_API FG01MsgWindowParamArray();
};

