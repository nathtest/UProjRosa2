#pragma once
#include "CoreMinimal.h"
#include "G01VAAnimReplaceFormatInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01VAAnimReplaceFormatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueAnimPathFormat;
    
    RS2RE_API FG01VAAnimReplaceFormatInfo();
};

