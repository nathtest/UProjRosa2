#pragma once
#include "CoreMinimal.h"
#include "G01SEADPlayParamCommon.generated.h"

class UObject;
class USQEXSEADSoundBank;

USTRUCT(BlueprintType)
struct FG01SEADPlayParamCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USQEXSEADSoundBank> BankAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundName;
    
    RS2RE_API FG01SEADPlayParamCommon();
};

