#pragma once
#include "CoreMinimal.h"
#include "G01SeqVAAnimLoadPathInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01SeqVAAnimLoadPathInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MUniqueAnimPathFormat;
    
    RS2RE_API FG01SeqVAAnimLoadPathInfo();
};

