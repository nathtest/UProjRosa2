#pragma once
#include "CoreMinimal.h"
#include "G01PlaySequenceRandomStartParamStruct.generated.h"

USTRUCT(BlueprintType)
struct FG01PlaySequenceRandomStartParamStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    RS2RE_API FG01PlaySequenceRandomStartParamStruct();
};

