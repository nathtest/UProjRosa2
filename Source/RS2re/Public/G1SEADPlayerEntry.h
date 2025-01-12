#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADBankSoundEntry.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEADBankSoundEntry -FallbackName=SQEXSEADBankSoundEntry
#include "G1SEADPlayerEntry.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG1SEADPlayerEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAllowMultiPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADBankSoundEntry Entry;
    
    FG1SEADPlayerEntry();
};

