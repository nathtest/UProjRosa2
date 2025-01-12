#pragma once
#include "CoreMinimal.h"
#include "G01SoundCategory.h"
#include "G01SEADActiveSound.generated.h"

USTRUCT(BlueprintType)
struct FG01SEADActiveSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOneShot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FG01SoundCategory SoundCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SeekTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPendingDestroy;
    
public:
    RS2RE_API FG01SEADActiveSound();
};

