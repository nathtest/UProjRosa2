#pragma once
#include "CoreMinimal.h"
#include "G01VoiceReleaseRequestParam.generated.h"

class USQEXSEADSoundBank;

USTRUCT(BlueprintType)
struct FG01VoiceReleaseRequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TextIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USQEXSEADSoundBank>> Banks;
    
    RS2RE_API FG01VoiceReleaseRequestParam();
};

