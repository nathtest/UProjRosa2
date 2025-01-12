#pragma once
#include "CoreMinimal.h"
#include "G01MenuSortDataStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01MenuSortDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FG01MenuSortDataStruct();
};

