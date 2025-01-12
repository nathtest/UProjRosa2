#pragma once
#include "CoreMinimal.h"
#include "G01MsgWindowParamArray.h"
#include "G01MsgWindowParamByChoice.generated.h"

USTRUCT(BlueprintType)
struct FG01MsgWindowParamByChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FG01MsgWindowParamArray> MTextParamByChoiceIndex;
    
    RS2RE_API FG01MsgWindowParamByChoice();
};

