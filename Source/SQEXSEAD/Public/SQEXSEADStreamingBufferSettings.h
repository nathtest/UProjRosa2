#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADStreamingBufferSettings.generated.h"

USTRUCT(BlueprintType)
struct FSQEXSEADStreamingBufferSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StreamingBuffserSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StreamingStreamCount;
    
    SQEXSEAD_API FSQEXSEADStreamingBufferSettings();
};

