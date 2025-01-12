#pragma once
#include "CoreMinimal.h"
#include "G01ArtsDelayRegister.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct RS2RE_API FG01ArtsDelayRegister {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* RequestSubject;
    
    FG01ArtsDelayRegister();
};

