#pragma once
#include "CoreMinimal.h"
#include "G01TextTagAll.h"
#include "G01TextAnalysisResult.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TextAnalysisResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextTagAll TagAll;
    
    FG01TextAnalysisResult();
};

