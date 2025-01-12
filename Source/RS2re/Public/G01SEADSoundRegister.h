#pragma once
#include "CoreMinimal.h"
#include "G01SEADSoundRegister.generated.h"

class USQEXSEADSoundBank;

USTRUCT(BlueprintType)
struct FG01SEADSoundRegister {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USQEXSEADSoundBank> BankAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* Bank;
    
    RS2RE_API FG01SEADSoundRegister();
};

