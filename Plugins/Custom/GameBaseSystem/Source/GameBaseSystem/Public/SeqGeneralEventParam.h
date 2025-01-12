#pragma once
#include "CoreMinimal.h"
#include "SeqGeneralEventParam.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqGeneralEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MEventKey;
    
    FSeqGeneralEventParam();
};

