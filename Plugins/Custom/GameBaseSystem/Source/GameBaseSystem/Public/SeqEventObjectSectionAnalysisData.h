#pragma once
#include "CoreMinimal.h"
#include "SeqEventObjectSectionAnalysisData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FSeqEventObjectSectionAnalysisData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Template;
    
    FSeqEventObjectSectionAnalysisData();
};

