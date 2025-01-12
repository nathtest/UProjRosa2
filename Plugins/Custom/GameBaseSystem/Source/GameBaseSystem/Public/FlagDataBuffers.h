#pragma once
#include "CoreMinimal.h"
#include "FlagData.h"
#include "FlagDataBuffers.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FFlagDataBuffers {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagData Save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagData Transient;
    
public:
    FFlagDataBuffers();
};

