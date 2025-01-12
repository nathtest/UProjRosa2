#pragma once
#include "CoreMinimal.h"
#include "FlagBlockAddress.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FFlagBlockAddress {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BlockIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 BitIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CachedFlagID;
    
public:
    FFlagBlockAddress();
};

