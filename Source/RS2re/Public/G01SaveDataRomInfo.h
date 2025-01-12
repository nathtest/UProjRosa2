#pragma once
#include "CoreMinimal.h"
#include "G01SaveDataRomInfo.generated.h"

USTRUCT(BlueprintType)
struct FG01SaveDataRomInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveRevision;
    
    RS2RE_API FG01SaveDataRomInfo();
};

