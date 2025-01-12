#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADBankSoundEntry.h" //CROSS-MODULE INCLUDE V2: -ModuleName=SQEXSEAD -ObjectName=SQEXSEADBankSoundEntry -FallbackName=SQEXSEADBankSoundEntry
#include "G01VoiceLoadParam.generated.h"

USTRUCT(BlueprintType)
struct FG01VoiceLoadParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName TextID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSQEXSEADBankSoundEntry Entry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLoadFailed;
    
    RS2RE_API FG01VoiceLoadParam();
};

