#pragma once
#include "CoreMinimal.h"
#include "SeqGeneralTriggerEventParam.h"
#include "SeqGeneralTriggerEventParamArray.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqGeneralTriggerEventParamArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSeqGeneralTriggerEventParam> Ranges;
    
    FSeqGeneralTriggerEventParamArray();
};

