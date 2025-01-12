#pragma once
#include "CoreMinimal.h"
#include "FlagData.generated.h"

USTRUCT(BlueprintType)
struct GAMEBASESYSTEM_API FFlagData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Buffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FlagIDs;
    
public:
    FFlagData();
};

