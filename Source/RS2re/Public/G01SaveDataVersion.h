#pragma once
#include "CoreMinimal.h"
#include "G01SaveDataVersion.generated.h"

USTRUCT(BlueprintType)
struct FG01SaveDataVersion {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Major;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Patch;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString CacheString;
    
public:
    RS2RE_API FG01SaveDataVersion();
};

