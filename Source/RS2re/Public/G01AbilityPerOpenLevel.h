#pragma once
#include "CoreMinimal.h"
#include "G01AbilityPerOpenLevel.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01AbilityPerOpenLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IdList;
    
    FG01AbilityPerOpenLevel();
};

