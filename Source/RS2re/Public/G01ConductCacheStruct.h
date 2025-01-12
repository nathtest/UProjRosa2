#pragma once
#include "CoreMinimal.h"
#include "G01ConductIDHelper.h"
#include "G01ConductTableRowStruct.h"
#include "G01ConductCacheStruct.generated.h"

USTRUCT(BlueprintType)
struct RS2RE_API FG01ConductCacheStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ConductIDHelper ConductID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FG01ConductTableRowStruct Conduct;
    
    FG01ConductCacheStruct();
};

