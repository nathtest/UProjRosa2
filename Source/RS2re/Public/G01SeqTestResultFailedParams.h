#pragma once
#include "CoreMinimal.h"
#include "G01TestResultDataParam.h"
#include "G01SeqTestResultFailedParams.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqTestResultFailedParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TestResultDataParam DataParam;
    
    RS2RE_API FG01SeqTestResultFailedParams();
};

