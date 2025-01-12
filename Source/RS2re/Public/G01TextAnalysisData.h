#pragma once
#include "CoreMinimal.h"
#include "G01TextAnalysisResult.h"
#include "G01TextAnalysisData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TextAnalysisData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextAnalysisResult IdAnalysis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextAnalysisResult ContentAnalysis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextAnalysisResult SpeakerAnalysis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextAnalysisResult ListenerAnalysis;
    
    FG01TextAnalysisData();
};

