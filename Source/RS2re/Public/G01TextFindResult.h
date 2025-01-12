#pragma once
#include "CoreMinimal.h"
#include "G01TextAnalysisData.h"
#include "G01TextCharacterInfo.h"
#include "G01TextFindResult.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01TextFindResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextCharacterInfo SpeakerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextCharacterInfo ListenerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextAnalysisData AnalysisData;
    
    FG01TextFindResult();
};

