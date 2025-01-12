#pragma once
#include "CoreMinimal.h"
#include "G01TextLanguageID.h"
#include "G01VoiceLanguageID.h"
#include "G01OptionOverrideData.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01OptionOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01TextLanguageID TextLanguageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverrideTextLanguageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VoiceLanguageID VoiceLanguageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverrideVoiceLanguageID;
    
    FG01OptionOverrideData();
};

