#pragma once
#include "CoreMinimal.h"
#include "SeqGeneralRepeaterEventParam.h"
#include "SeqGeneralRepeaterEventParamArray.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqGeneralRepeaterEventParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqGeneralRepeaterEventParam> Ranges;
    
    FSeqGeneralRepeaterEventParamArray();
};

