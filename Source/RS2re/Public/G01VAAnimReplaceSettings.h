#pragma once
#include "CoreMinimal.h"
#include "G01VAAnimReplaceFormatKeys.h"
#include "G01VAAnimReplaceSettings.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01VAAnimReplaceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01VAAnimReplaceFormatKeys FormatKeys;
    
    FG01VAAnimReplaceSettings();
};

