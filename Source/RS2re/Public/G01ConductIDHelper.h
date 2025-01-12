#pragma once
#include "CoreMinimal.h"
#include "G01ConductIDHelper.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ConductIDHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConductID;
    
    FG01ConductIDHelper();
};

